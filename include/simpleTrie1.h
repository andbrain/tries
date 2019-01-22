#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <new>
#include <cstring>
namespace SimpleTrie1{

  #ifndef NUMBER_PATHS
  #define NUMBER_PATHS 10
  #endif

  class node{
    public:
      node();
      ~node();
      void init();
      void insert(const char *key, std::string data, int current, int end);
      std::string value;
      node *paths;
  };

  class trie{
    public:
      trie();
      ~trie();
      int insert(std::string key, std::string data);
      void show();
    private:
      node *m_root;
  };

}

#endif
