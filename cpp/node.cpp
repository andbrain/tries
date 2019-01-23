#include "../include/node.h"


SimpleTrie1::node::node()
{
  this->value = "";
  this->paths = NULL;
}

SimpleTrie1::node::~node()
{
  for(std::vector<node*>::iterator it = this->paths->begin(); it != this->paths->end(); ++it)
  {
    delete *it;
  }

  delete this->paths;
}

void SimpleTrie1::node::init(std:string value)
{
  this->value = value;
  this->paths = new std::vector<node*>();

  for (size_t i = 0; i < NUMBER_PATHS; ++i)
  {
    this->paths->push_back(NULL);
  }
}

void SimpleTrie1::node::insert(const char *key, std::string data, int current, int end)
{
  // std::cout << key << " " << data << '\n';
  // std::cout << "current: " << current << " end: " << end << '\n';
  //
  // if(current < end)
  // {
  //   const char c = key[current - 1];
  //   int iChar = (int)c - 48; //numbers in ASCII starts from 48
  //
  //   std::cout << "Add node for digit " << iChar << '\n';
  //   node cnode = this->paths[iChar];
  //   std::cout << cnode.value << " " << cnode.paths << '\n';
  //   if(cnode.paths == NULL)
  //   {
  //     std::cout << "Path was created for digit " << iChar << '\n';
  //     cnode.init();
  //   }
  //   cnode.insert(key, data, current++, end);
  // }
  // else
  // {
  //   this->value = data;
  //   std::cout << "Data saved!" << '\n';
  // }
}
