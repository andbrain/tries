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
    SimpleTrie2::trieNode n1;
    SimpleTrie2::trieNode n2;
    SimpleTrie2::trieNode n3;

    std::cout << n1.getId() << std::endl;
    std::cout << n2.getId() << std::endl;
    std::cout << n3.getId() << std::endl;

//    for (auto voc: vocabulary){
//        std::cout << "inserting: " << voc << std::endl;
//
//    }


    return 0;
}
