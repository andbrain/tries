#include "../include/trie.h"

//////////////              //////////////
////////////// SimpleTrie 1 //////////////
//////////////              //////////////

SimpleTrie1::trie::trie()
{
  this->m_root = new node();
  this->m_root->init("");
}

SimpleTrie1::trie::~trie()
{
  delete this->m_root;
}

int SimpleTrie1::trie::insert(std::string key, std::string data)
{
  const char *cKey = key.c_str();
  m_root->insert(cKey, data, 1, strlen(cKey));
}

void SimpleTrie1::trie::show()
{
  std::cout << "Showing trie nodes:" << '\n';
}
