#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
  list<char> editor;
  string s; int m;
  cin >> s >> m;
  for (auto c : s) 
    editor.push_back(c);

  auto it = editor.end();
  while (m--) {
    char cmd, arg;
    cin >> cmd;
    if (cmd == 'L') {
      if (it != editor.begin()) it--;
    } else if (cmd == 'D') {
      if (it != editor.end()) it++;
    } else if (cmd == 'B') {
      if (it != editor.begin()) {
        it = editor.erase(--it);
      }
    } else if (cmd == 'P') {
      cin >> arg;
      editor.insert(it, arg);
    }
  }
  for (auto c : editor) cout << c;
}
