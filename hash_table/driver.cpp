#include <iostream>

#include "hash_table.h"

using std::cout;
using std::endl;

int main() {
    HashTable ht;

    cout << "hash(\"ace\"): " << ht.hash("ace") << endl;
    cout << "hash(\"aaa\"): " << ht.hash("aaa") << endl;
    cout << "hash(\"jj\"): " << ht.hash("jj") << endl;

    return 0;
}
