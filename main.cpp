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

    for (auto voc: vocabulary){
        std::cout << "inserting: " << voc << std::endl;
        t1.insert(voc);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "[Words indexed] -> ok" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "[Tasks with trie]" << std::endl;

    std::cout << "searching: hel -> " << t1.search("hel") << std::endl;
    std::cout << "searching: he -> " << t1.search("he") << std::endl;
    std::cout << "Autocompletion of 'hel'" << std::endl;

    t1.autocomplete("hel");
    return 0;
}
