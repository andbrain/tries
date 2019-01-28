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
  // trie.show();
  return 0;
}
