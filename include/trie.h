#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <new>
#include <cstring>
#include <vector>
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

namespace SimpleTrie2{

    /**
     * Id generator
     */
    static int _idGen = 1;
    #define ALPHABET_SIZE 26
    #define CHAR_TO_INDEX(c) (int(c) - (int)'a')

    class trieNode{
      private:

        int id;
        bool end;
        trieNode **children;

    public:

        trieNode();
        ~trieNode();
        int getId() const;


        bool isEnd() const;

        void setEnd(bool isEnd);

        trieNode *const *getChildren() const;
    };

    class trie{
      private:
          trieNode* root;
      public:
        trie();
        ~trie();

        void insert(std::string key);

        bool search(std::string key);
    };
}

#endif
