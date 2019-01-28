#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <new>
#include <cstring>
#include "node.h"

namespace SimpleTrie1{

  class trie{
    public:
      trie();
      ~trie();
      int insert(std::string key, std::string data);
      std::string search(std::string key);
    private:
      node *m_root;
  };

}

#endif
