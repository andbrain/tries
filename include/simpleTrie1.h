#ifndef TRIE_H
#define TRIE_H
#include <iostream>

namespace SimpleTrie1{
  class Trie{
  public:
    Trie();
  private:
    char university[20];
    struct _trie* paths[10];

  };
  //
  // typedef struct _trie
  // {
  //   char university[20];
  //   struct _trie* paths[10];
  // } trie;
}

#endif
