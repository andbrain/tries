#include <iostream>
#include "include/trie.h"

int main(int argc, char const *argv[]) {

    std::string vocabulary[] = {
            "hello",
            "dog",
            "hell",
            "cat",
            "a",
            "hel",
            "help",
            "helps",
            "helping"
    };

//    int n = sizeof(vocabulary)/ sizeof(vocabulary[0]);

    SimpleTrie2::trie t1;
//    t1.insert(vocabulary[0]);
//    t1.insert(vocabulary[1]);

        for (auto voc: vocabulary){
        std::cout << "inserting: " << voc << std::endl;
        t1.insert(voc);
    }


    return 0;
}
