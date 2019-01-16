#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <new>
#include <cstring>
namespace SimpleTrie1{

  #ifndef NUMBER_PATHS
  #define NUMBER_PATHS 10
  #endif

  class trie{
    public:
      trie();
      ~trie();
      void init();
      char university[20];
      trie *paths;
  };
  class Trie{
    public:
      Trie();
      ~Trie();
      int insert(std::string key, std::string data);
      void show();
    private:
      trie *mTrie;
  };

}

#endif
