//Declare class and member functions for arbitrary_list.

/*
make arbitrary list class
    add (take int position and some value, insert that value at that position, return success)
    remove (take int position delete that element, update list as needed, return success of value removal)
    pop? (take a value, find the first instance of that value and remove it, return success or fail)
    peek (take int position return list element's value)
    constructor (takes an int that is the initial size of the list)
 
track end of list (the index one position after the last valid element)
do we want the list to be able to grow
identifier for the list, probably in driver file
*/

class ArbitraryList {
    public:
        ArbitraryList(int initialSize);
        bool add(int position, int value);
        bool remove(int position);
        int peek(int position);
    private:
        int *internalStorage;
        int endOfList;
};

