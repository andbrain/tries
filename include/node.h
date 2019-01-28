#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector>

namespace SimpleTrie1{

  #ifndef NUMBER_PATHS
  #define NUMBER_PATHS 10
  #endif

  class node{
  public:
    node();
    ~node();
    void init(std::string value);
    void insert(const char *key, std::string data, int current, int end);

  // private:
    std::string value;
    std::vector<node*> *children;
  };
}

#endif
