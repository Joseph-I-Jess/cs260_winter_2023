#include <iostream>
//#include <sstream> could use this instead of std::to_string on int to convert int to string

#include "hash_table.h"

HashTable::HashTable() : HashTable(16) {
    // rather than manually initializing all my variables for each constructor, why not consolidate constructor code into fewer unique constructors
    // table.reserve(16);
    // size = 0;
}

HashTable::HashTable(int initial_size) : capacity{initial_size}, collisionCount{0}, insertCount{0}, size{0} {
    table.reserve(initial_size);
    for(int i = 0; i < initial_size; ++i) {
        table.push_back(""); // could use iota to use iterators to fill in those valuies instead...
    }
    //size = 0; // this could also be done with a "member initialization list", which can do references with parens ( ) or values with braces { }
    //capacity = initial_size;
}

// Takes a string value, and places that value at the hashed location in our table, return if placement causes a collision.
bool HashTable::insert(string value) {
    // hash to find location in vector
    int candidate_position = hash(value);
    // detect if a collision is about to occur, assume no collision, set collision variable if one is detected
    bool collision = false;
    // a collision is when the value in the table is not my proposed value and the position in the table is not empty (whatever empty means)
    // std::cout << "table.at(" << candidate_position << "): " << "\"" << table.at(candidate_position) << "\"" << std::endl; //debug statement
    if(table.at(candidate_position) != value && table.at(candidate_position) != "") {
        collision = true;
        collisionCount++;
    }

    // place in vector
    table.at(candidate_position) = value;

    // update size variable if no collision has happened
    if(collision == false) {
        size++;
    }

    insertCount++;

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
    if(table.at(candidate_position) == value) {
        // remove value from table
        table.at(candidate_position) = "";
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
int HashTable::getCapacity() {return capacity;}
//Helper function to fetch current size
int HashTable::getSize() {return size;}
//Helper function to fetch current "fullness"
float HashTable::getFullness() {
    int cap = getCapacity();
    float result = 0.0f;
    if(cap != 0) {
        result = (float)size / (float)cap;
    } else {
        result = -1;
    }
    return result;
}

int HashTable::getInsertCount() {return insertCount;}
int HashTable::getCollisionCount() {return collisionCount;}

string HashTable::toString() {
    string result = "[";

    for(int key = 0; key < getCapacity(); ++key) {
        if(table.at(key) != "") {
            result += "(" + std::to_string(key) + ", " + table.at(key) + ")";
        }
    }

    result += "]";

    return result;
}
