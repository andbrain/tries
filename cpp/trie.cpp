
#include <trie.h>

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

//  std::cout << "Creating node " << id << std::endl;

  for(int i=0; i<ALPHABET_SIZE; i++){
    this->children[i] = NULL;
  }
}

SimpleTrie2::trieNode::~trieNode() {
//  std::cout << "Releasing node " << this->getId() << std::endl;

  for(int i=0; i<ALPHABET_SIZE;i++){
    if(this->children[i])
      delete this->children[i];
  }

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

SimpleTrie2::trieNode **SimpleTrie2::trieNode::getChildren(){
  return children;
}

SimpleTrie2::trie::trie(){
  root = new trieNode();
}

SimpleTrie2::trie::~trie() {
//  std::cout << "Releasing trie.." << std::endl;
  delete root;
}

void SimpleTrie2::trie::insert(std::string key){
  trieNode *node = root;
  int index;

  for (int i = 0; i < key.length(); ++i) {
    index = CHAR_TO_INDEX(key[i]);

//    std::cout << "Node:" << node->getId() << " with char: " << key[i] << std::endl;
//    std::cout << "char: " << key[i] << " index: " << index << std::endl;
//    std::cout << "char: " << key[i] << std::endl;

    if(!node->getChildren()[index])
      node->getChildren()[index] = new trieNode();

    node = node->getChildren()[index];
  }

  node->setEnd(true);
//  std::cout << "Node " << node->getId() << " assigned as end of word.." << std::endl;
}

bool SimpleTrie2::trie::search(std::string key) {
  trieNode* node = root;
  int index;
  for (int i = 0; i < key.length(); ++i) {
    index = CHAR_TO_INDEX(key[i]);
    if(!node->getChildren()[index])
      return false;
    node = node->getChildren()[index];
  }

  return (node != NULL && node->isEnd());
}



int SimpleTrie2::trie::autocomplete(std::string query) {
  trieNode* node = root;
  int index;

  for (int i = 0; i < query.length(); ++i) {
    index = CHAR_TO_INDEX(query[i]);

    if(!node->getChildren()[index])
      return -1;
    node = node->getChildren()[index];
  }

  findWords(node, query);

  return 1;
}

void SimpleTrie2::trie::findWords(trieNode *node,std::string prefix){
  if(node->isEnd())
    std::cout << prefix << std::endl;
  if(lastNode(node))
    return;

  for (int i = 0; i < ALPHABET_SIZE; ++i) {
    if(node->getChildren()[i]){
      std::string p = prefix;
      p.push_back(97 + i);
      findWords(node->getChildren()[i],p);
    }
  }
}

bool SimpleTrie2::trie::lastNode(trieNode *node){
  for (int i = 0; i < ALPHABET_SIZE; ++i)
    if(node->getChildren()[i])
      return false;
  return true;
}
