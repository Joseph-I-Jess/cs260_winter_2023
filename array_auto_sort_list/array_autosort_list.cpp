#include <climits>

#include "autosort_list.h"

//implement member functions for arbitrary list class using an array for internal storage.
ArbitraryList::ArbitraryList(int initialSize = 16) {
   internalStorage = new int[initialSize];
   for (int i = 0; i < initialSize; i++) {
        internalStorage[i] = 0;
    }
   endOfList = 0;
}

bool ArbitraryList::add(int position, int value) {
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

bool ArbitraryList::remove(int position) {
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

int ArbitraryList::peek(int position) {
    if (position < 0 || position >= endOfList) {
        return INT_MIN; // not perfect, but better than -1...
    }

    return internalStorage[position];
}
