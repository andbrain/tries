#include <iostream>
#include "include/simpleTrie1.h"

int main(int argc, char const *argv[]) {
  using std::cout;
  using std::endl;

  cout << "Begining.." << endl;
  SimpleTrie1::Trie tTrie;
  tTrie.insert("1636", "Harvard");
  cout << "Finishing.." << endl;
  return 0;
}
