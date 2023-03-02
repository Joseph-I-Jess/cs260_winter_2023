#include <iostream>

#include "hash_table.h"

using std::cout;
using std::endl;

/*
    ToDo:
        refactor to use an array instead of a vector?
            or we manually track our own capacity and ignore the actual capacity of the vector so we can keep using the nice vector functions available to us?
*/

int main() {
    HashTable ht;

    // check initial capacity of default construction of hashTable
    // cout << "ht.getCapacity(): " << ht.getCapacity() << endl;

    // test a few hash values
    // cout << "hash(\"ace\"): " << ht.hash("ace") << endl;
    // cout << "hash(\"aaa\"): " << ht.hash("aaa") << endl;
    // cout << "hash(\"jj\"): " << ht.hash("jj") << endl;

    // insert aaa, search for aaa, also search for a would-be collision value to see what is in that position
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
    ht.insert("joe");
    // ht.insert("bob");

    cout << "search(\"joe\"): " << "\"" << ht.search("joe") << "\"" << endl;

    // what are size, capacity, and fullness of our good table?
    cout << "ht.getSize(): " << ht.getSize() << endl;
    cout << "ht.getCapacity(): " << ht.getCapacity() << endl;
    cout << "ht.getFullness(): " << ht.getFullness() << endl;

    // how many collsions so far?
    cout << "ht.getCollisions(): " << ht.getCollisions() << endl;

    cout << "end of program, have a nice day!" << endl;

    return 0;
}
