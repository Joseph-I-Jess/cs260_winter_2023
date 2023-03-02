#include <iostream>

#include "hash_table.h"

HashTable::HashTable() : HashTable(16) {
    // rather than manually initializing all my variables for each constructor, why not consolidate constructor code into fewer unique constructors
    // table.reserve(16);
    // size = 0;
}

HashTable::HashTable(int initial_size) : size{0}, collisions{0} {
    table.resize(initial_size, "");
    // for(int i = 0; i < initial_size; ++i) {
    //     table.push_back(""); // could use iota to use iterators to fill in those valuies instead...
    // }
    //size = 0; // this could also be done with a "member initialization list", which can do references with parens ( ) or values with braces { }
}

// Takes a string value, and places that value at the hashed location in our table, return if placement causes a collision.
bool HashTable::insert(string value) {
    // hash to find location in vector
    int candidate_position = hash(value);
    // detect if a collision is about to occur, assume no collision, set collision variable if one is detected
    bool collision = false;
    // a collision is when the value in the table is not my proposed value and the position in the table is not empty (whatever empty means)
    std::cout << "table[" << candidate_position << "]: " << "\"" << table.at(candidate_position) << "\"" << std::endl;
    if(table.at(candidate_position) != value && table.at(candidate_position) != "") {
        collision = true;
        collisions++;
    }

    // place in vector
    table.insert(table.begin() + candidate_position, value);

    // update size variable if no collision has happened
    if(collision == false) {
        size++;
    }

    // return if placement causes a collision
    return collision;
}

string HashTable::search(string value) {
    // hash the value to find the position to check in the table and return the value found...
    // we might want to switch this to be a boolean representing whether or not the value passed in matches the value in the table where the value would be found...
    return table.at(hash(value));
}

// Remove value from table if it is in the table, return success of removal.
bool HashTable::remove(string value) {
    // find hash
    int candidate_position = hash(value);
    // check if value in table is the same as our proposed value and empty if so, do not empty otherwise!
    if(table[candidate_position] == value) {
        // remove value from table
        table[candidate_position] = "";
        // update size!
        size--;
        return true;
    }

    return false;
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
    result %= getCapacity();

    return result;
}

//Helper function to fetch current capacity
int HashTable::getCapacity() {return table.capacity();}
//Helper function to fetch current size
int HashTable::getSize() {return size;}
//Helper function to fetch current "fullness"
int HashTable::getFullness() {
    int cap = getCapacity();
    float result = 0.0f;
    if(cap != 0) {
        result = size / getCapacity();
    } else {
        result = -1;
    }
    return result;
}

float HashTable::getCollisions() {return collisions;}
