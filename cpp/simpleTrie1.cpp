#include "../include/simpleTrie1.h"

SimpleTrie1::trie::trie()
{
  this->university[0] = '\0';
  this->paths = NULL;
  std::cout << "criados os paths" << '\n';
}

SimpleTrie1::trie::~trie()
{
  delete [] this->paths;
  std::cout << "destruindo os paths" << '\n';
}

void SimpleTrie1::trie::init()
{
  this->paths = new trie[NUMBER_PATHS - 1];
}

SimpleTrie1::Trie::Trie()
{
  this->mTrie = new trie();
  this->mTrie->init();
}

SimpleTrie1::Trie::~Trie()
{
  delete this->mTrie;
}

int SimpleTrie1::Trie::insert(std::string key, std::string data)
{
  const char *charKey = key.c_str();

  for(int i = 0; i < strlen(charKey); i++)
  {
    std::cout << charKey[i] << '\n';
  }
  
}
