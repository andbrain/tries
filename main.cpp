#include <iostream>
#include "include/trie.h"

int main(int argc, char const *argv[]) {
  using std::cout;
  using std::endl;

  std::string keys[] = {
    "1988",
    "",
    "",
    ""
  };
  std::string values[] = {
    "Anderson",
    "",
    "",
    ""
  };

  SimpleTrie1::trie trie;
  trie.insert("1988", "Anderson");
  trie.insert("1991", "Lilia");
  std::cout << "search: 1988   ->   ";
  std::cout << trie.search("1988") << '\n';
  std::cout << "search: 1989   ->   ";
  std::cout << trie.search("1989") << '\n';

  return 0;
}
