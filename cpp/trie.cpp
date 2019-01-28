#include "../include/trie.h"

//////////////              //////////////
////////////// SimpleTrie 1 //////////////
//////////////              //////////////

SimpleTrie1::trie::trie()
{
  std::cout << "init trie.." << '\n';
  this->m_root = new node();
  this->m_root->init("");
}

SimpleTrie1::trie::~trie()
{
  delete this->m_root;
  std::cout << "release trie.." << '\n';
}

int SimpleTrie1::trie::insert(std::string key, std::string data)
{
  const char *cKey = key.c_str();
  m_root->insert(cKey, data, 0, strlen(cKey));
  return 0;
}

std::string SimpleTrie1::trie::search(std::string key)
{
  const char *cKey = key.c_str();
  int found = this->m_root->search(cKey, 0, strlen(cKey));
  if(found)
    return "found";
  else
    return "not found";
}
