#include <iostream>

#include "hash_table.h"

HashTable::HashTable() {

}

HashTable::HashTable(int initial_size) {
    table.reserve(initial_size);
}

// Takes a string value, and places that value at the hashed location in our table, return if placement causes a collision.
bool HashTable::insert(string value) {
    // hash to find location in vector
    // place in vector
    // return if placed causes a collision
}

string HashTable::search(string value) {

}

bool HashTable::remove(string value) {

}

// Take a string value and returns a hash that represents the position that it would go in this table's vector.
int HashTable::hash(string value) {
    // position in the alphabet for the hash...
    // walk through string, adding up the poisitonal data of each character
    int result = 0;
    // we assume all lower-case characters, we should do some input validation somewhere!
    for(char& curr : value) {
        result += curr - 'a' + 1;
    }

    return result;
}
