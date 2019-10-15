
#ifndef CS130A_DICTIONARY_H
#define CS130A_DICTIONARY_H

#include <string>

using namespace std;

class Dictionary {
public:
    // Insert an input set of n keys to the dictionary.  Print out the the hash functions comprising the perfect hash and the number of trials needed to generate each hash function.
    void bulkInsert(int n, string *keys);

    // Insert a key to the dictionary. Handle collision with separate chaining. Print out if the insertion caused a collision.
    void insert(string key);

    // Remove a key from the dictionary.
    void remove(string key);

    // Return whether a key is found in the dictionary. Print the buckets accessed during the operation.
    bool find(string key);
};


#endif //CS130A_DICTIONARY_H
