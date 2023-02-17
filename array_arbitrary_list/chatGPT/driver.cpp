#include <iostream>

#include "arb_list_template.h"

using std::cout;
using std::endl;

/*
    ToDo:
        grow member function
        duplicate code and refactor for auto-sorting
*/

/*Make some simple tests showing our arbitrary list working!*/
int main(int argc, char **argv) {
    ArbitraryList<int> aList(16);

    //add to list and peek
    aList.add(0, 42);

    cout << "aList[0]: " << aList.peek(0) << endl;

    //remove final element of a list
    aList.remove(0);

    cout << "aList[0]: " << aList.peek(0) << endl;

    //remove from an empty list
    cout << "" << aList.remove(0) << endl;

    cout << "aList[0]: " << aList.peek(0) << endl;

    return 0;
}