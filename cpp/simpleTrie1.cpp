#include "../include/simpleTrie1.h"

SimpleTrie1::node::node()
{
  this->value = "";
  this->paths = NULL;
}

SimpleTrie1::node::~node()
{
  delete [] this->paths;
}

void SimpleTrie1::node::init()
{
  this->paths = new node[NUMBER_PATHS - 1];
}

void SimpleTrie1::node::insert(const char *key, std::string data, int current, int end)
{
  std::cout << key << " " << data << '\n';

  if(current <= end)
  {
    const char c = key[current];
    int iChar = (int)c - 48; //numbers in ASCII starts from 48

    std::cout << "Add node for digit " << iChar << '\n';
    node cnode = this->paths[iChar];
    std::cout << cnode.value << " " << cnode.paths << '\n';
    if(cnode.paths == NULL)
      cnode.init();
    cnode.insert(key, data, current++, end);
  }
  else
  {
    this->value = data;
    std::cout << "Data saved!" << '\n';
  }
}


SimpleTrie1::trie::trie()
{
  this->m_root = new node();
  this->m_root->init();
}

SimpleTrie1::trie::~trie()
{
  delete this->m_root;
}

int SimpleTrie1::trie::insert(std::string key, std::string data)
{
  const char *cKey = key.c_str();
  // for(int i = 0; i < strlen(charKey); i++)
  // {
  //   std::cout << charKey[i] << '\n';
  // }
  m_root->insert(cKey, data, 1, strlen(cKey));
}
