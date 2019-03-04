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


//////////////              //////////////
////////////// SimpleTrie 2 //////////////
//////////////              //////////////


SimpleTrie2::trieNode::trieNode() {
  id = _idGen++;
  end = false;
  children = new trieNode*[ALPHABET_SIZE];

  for(int i=0; i<ALPHABET_SIZE; i++){
    this->children[i] = NULL;
  }
}

SimpleTrie2::trieNode::~trieNode() {
  delete[] this->children;
}

int SimpleTrie2::trieNode::getId() const {
  return id;
}

bool SimpleTrie2::trieNode::isEnd() const {
  return this->end;
}

void SimpleTrie2::trieNode::setEnd(bool isEnd) {
  this->end = isEnd;
}

SimpleTrie2::trieNode *const *SimpleTrie2::trieNode::getChildren() const {
  return children;
}

SimpleTrie2::trie::trie(){
  root = new trieNode();
}

SimpleTrie2::trie::~trie() {
  delete root;
}
