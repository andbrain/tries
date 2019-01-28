#include "../include/node.h"


SimpleTrie1::node::node()
{
  std::cout << "init node.." << '\n';
  this->value = "";
  this->children = NULL;
}

SimpleTrie1::node::~node()
{
  for(std::vector<node*>::iterator it = this->children->begin(); it != this->children->end(); ++it)
  {
    delete *it;
  }

  delete this->children;
  std::cout << "release node.." << '\n';
}

void SimpleTrie1::node::init(std::string value)
{
  this->value = value;
  this->children = new std::vector<node*>();

  for (size_t i = 0; i < NUMBER_PATHS; ++i)
  {
    this->children->push_back(NULL);
  }
}

void SimpleTrie1::node::insert(const char *key, std::string data, int current, int end)
{
  // std::cout << key << " " << data << '\n';
  std::cout << "current: " << current << " end: " << end << '\n';

  if(current < end)
  {
    const char c = key[current];
    int iChar = (int)c - 48; //numbers in ASCII starts from 48

    node *cnode = this->children->at(iChar);

    if(cnode == NULL)
    {
      std::cout << "Path was created for digit " << iChar << '\n';
      cnode = new node();
      cnode->init(std::to_string(iChar));
      this->children->at(iChar) = cnode;
    }
    cnode->insert(key, data, current + 1, end);
  }
  else
  {
    this->value = data;
    std::cout << "Data saved!" << '\n';
  }
}

int SimpleTrie1::node::search(const char *key, int current, int end)
{
  int found = 0;
  const char c = key[current];
  int iChar = (int)c - 48; //numbers in ASCII starts from 48

  if(current < end)
  {
    node *cnode = this->children->at(iChar);

    if(cnode != NULL)
      return cnode->search(key, current + 1, end);
  }
  else
    found = 1;

  return found;
}
