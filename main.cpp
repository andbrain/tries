#include <iostream>
#include <vector>
#include "include/trie.h"
#include <fstream>


std::vector<std::string> data;
void readData(std::string filename);

int main(int argc, char const *argv[]) {
    readData("/home/anderson/autocompletion/test/american-names.txt");

    SimpleTrie2::trie t1;

    for (auto voc: data){
        std::cout << "inserting: " << voc << std::endl;
        t1.insert(voc);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "[Words indexed] -> ok" << std::endl;
    std::cout << "[Tasks with trie]" << std::endl;

    std::cout << "searching: Jeff -> " << t1.search("Jeff") << std::endl;
    std::cout << "Autocompletion of 'J'" << std::endl;
    t1.autocomplete("Jo");
    return 0;
}

void readData(std::string filename){
    std::ifstream infile(filename);
    std::string line;

    while(std::getline(infile,line))
        data.push_back(line);
}