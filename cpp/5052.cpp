#include <iostream>
using namespace std;

class TrieNode {
public:
  bool is_word;
  TrieNode* children[10];

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
  bool consistent;

  Trie()
    : root(new TrieNode()), consistent(true) {}

  void insert(string word) {
    TrieNode* node = root;
    for (char c : word) {
      int i = c - '0';
      if (node->children[i] == nullptr) {
        node->children[i] = new TrieNode();
      }
      if (node->is_word) {
        consistent = false;
      }
      node = node->children[i];
    }
    node->is_word = true;
  }
};

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int t; cin >> t; 
  while (t--) {
    int n; cin >> n;
    Trie* root = new Trie();
    for (int i = 0; i < n; i++) {
      string tel; cin >> tel;
      root->insert(tel);
    }
    cout << (root->consistent ? "YES" : "NO") << '\n';
    delete root;
  }
}
