#include <iostream>
#include <string>
using namespace std;

class TrieNode {
public:
  bool is_word;
  TrieNode* children[26];

  TrieNode() {
    is_word = false;
    for (auto& child : children) 
      child = nullptr;
  }
};

class Trie {
private:
  TrieNode* root;

public:
  Trie() {
    root = new TrieNode();
  }

  void insert(string word) {
    TrieNode* node = root; 
    int k = 0;
    for (char c : word) {
      k = c - 'a';
      if (node->children[k] == nullptr) {
        node->children[k] = new TrieNode();
      }
      node = node->children[k];
    }
    node->is_word = true;
  }

  bool search(string word, bool prefix=false) {
    TrieNode* node = root;
    int k = 0;
    for (char c : word) {
      k = c - 'a';
      node = node->children[k];
      if (node == nullptr) {
        return false;
      }
    }
    return prefix ? true : node->is_word;
  }

  bool startsWith(string prefix) { 
    return search(prefix, true);
  }
};

