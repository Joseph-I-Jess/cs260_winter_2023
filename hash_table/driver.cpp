#include <iostream>

#include "hash_table.h"

using std::cout;
using std::endl;

/*
    ToDo:
        xrefactor to use an array instead of a vector?
            .or we manually track our own capacity and ignore the actual capacity of the vector so we can keep using the nice vector functions available to us?
        Check out why collisions did not happen on main running with arguments "geeks for geeks"
*/

int main(int argc, char **argv) {
    HashTable ht;
    
    cout << "There are " << argc << " command-line arguments." << endl;
    for(int i = 1; i < argc; ++i) {
        //cout << "argument " << i << ": "  << argv[i] << endl;
        ht.insert(argv[i]);
    }


    // we can get access to characters after the end of the string!
    // for(int i = 0; i < 10; ++i) {
    //     cout << "argument[1][" << i << "](char code): "  << argv[1][i] << "(" << (int)argv[1][i] << ")" << endl;
    // }


    // // check initial capacity of default construction of hashTable
    // cout << "ht.getCapacity(): " << ht.getCapacity() << endl;

    // // test a few hash values
    // cout << "hash(\"aaa\"): " << ht.hash("aaa") << endl;
    // cout << "hash(\"ace\"): " << ht.hash("ace") << endl;
    // cout << "hash(\"joe\"): " << ht.hash("joe") << endl;
    // cout << "hash(\"bob\"): " << ht.hash("bob") << endl;

    // // insert aaa, search for aaa, also search for a would-be collision value to see what is in that position
    // cout << "insert(\"aaa\"): " << (ht.insert("aaa") ? "collision detected" : "no collision detected") << endl;
    // cout << "search(\"aaa\"): " << "\"" << ht.search("aaa") << "\"" << endl;
    // cout << "search(\"ab\"): " << "\"" << ht.search("ab") << "\"" << endl;

    // // search for something not yet in the table
    // cout << "search(\"ace\"): " << "\"" << ht.search("ace") << "\"" << endl;

    // // search for a value too large for the table!  And make sure our hash function always gives a value within the table.
    // cout << "search(\"jj\"): " << "\"" << ht.search("jj") << "\"" << endl;

    // // add and detect a collision
    // cout << "insert(\"ab\"): " << (ht.insert("ab") ? "collision detected" : "no collision detected") << endl;
    // // and make sure the value was still placed in the table!
    // cout << "search(\"ab\"): " << "\"" << ht.search("ab") << "\"" << endl;

    // // attempt to remove value not in table where table position is empty
    // cout << "remove(\"jj\"): " << (ht.remove("jj") ? "removal succeeded" : "removal failed") << endl;

    // // attempt to remove value not in table where table position is non-empty
    // cout << "remove(\"aaa\"): " << (ht.remove("aaa") ? "removal succeeded" : "removal failed") << endl;

    // // attempt to remove value that is in the table, and then prove that it is gone!
    // cout << "remove(\"ab\"): " << (ht.remove("ab") ? "removal succeeded" : "removal failed") << endl;
    // cout << "search(\"ab\"): " << "\"" << ht.search("ab") << "\"" << endl;

    // // test getFullness with capacity 0!
    // // HashTable ht2(0);
    // // cout << "ht2.getFullness(): " << ht2.getFullness() << endl;

    // // insert some values
    // ht.insert("aaa");
    // ht.insert("ace");
    // ht.insert("joe");
    // ht.insert("bob");
    // ht.insert("cat");

    // cout << "search(\"joe\"): " << "\"" << ht.search("joe") << "\"" << endl;

    // what are size, capacity, and fullness of our good table?
    cout << "ht.getSize(): " << ht.getSize() << endl;
    cout << "ht.getCapacity(): " << ht.getCapacity() << endl;
    cout << "ht.getFullness(): " << ht.getFullness() << endl;

    // how many collsions so far?
    cout << "ht.getCollisionCount(): " << ht.getCollisionCount() << endl;

    cout << "\n" << ht.toString() << endl;

    cout << "\nNumerators on possibly useful statistics:" << endl;
    cout << "\tinsert count: " << ht.getInsertCount() << endl;
    cout << "\tsize: " << ht.getSize() << endl;

    cout << "\nDenominator on possibly useful statistics:" << endl;
    cout << "\tcollision count: " << ht.getCollisionCount() << endl;

    cout << "\nPossibly useful statistics:" << endl;
    cout << "\tsize / collision count: " << (float)ht.getSize() / ht.getCollisionCount() << endl;
    cout << "\tinsert count / collision count: " << (float)ht.getInsertCount() / ht.getCollisionCount() << endl;

    cout << "\nend of program, have a nice day!" << endl;

    return 0;
}
