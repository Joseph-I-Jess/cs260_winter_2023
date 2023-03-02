#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class HashTable {
    public:
        HashTable();
        HashTable(int initial_size);

        bool insert(string value);
        string search(string value);
        bool remove(string value);

        // we could have this be private if we did not want the users to have access to this information
        int hash(string value);

        int getCapacity();
        int getSize();
        int getFullness();
        float getCollisions();

    private:
        vector<string> table;
        int size;
        int collisions; // should we create a clearTable function, or maybe when we resize we could clear collisions?
};