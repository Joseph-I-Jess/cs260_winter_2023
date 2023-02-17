#include "arb_list_template.h"

template<typename T>
ArbitraryList<T>::ArbitraryList(int initialSize) {
   internalStorage = new T[initialSize];
   endOfList = 0;
}

template<typename T>
bool ArbitraryList<T>::add(int position, T value) {
    if(position < 0) {
        position = 0;
    } else if (position > endOfList) {
        position = endOfList;
    }
    //check if full and grow if needed?

    //shift later than position down one position
    for(int i = endOfList; i > position; --i) {
        internalStorage[i] = internalStorage[i - 1];
    }

    internalStorage[position] = value;
    endOfList++;

    return true;
}

template<typename T>
bool ArbitraryList<T>::remove(int position) {
    if (endOfList == 0) {
        return false; // nothing was removed
    }
    
    if(position < 0) {
        position = 0;
    } else if (position >= endOfList) {
        position = endOfList -1;
    }
    

    //shift later than position down one position
    for(int i = position; i < endOfList; ++i) {
        internalStorage[i] = internalStorage[i + 1];
    }
    
    endOfList--;

    return true;
}

template<typename T>
T ArbitraryList<T>::peek(int position) {
    if (position < 0 || position >= endOfList) {
        return T(); // default value of type T
    }

    return internalStorage[position];
}

template class ArbitraryList<int>;