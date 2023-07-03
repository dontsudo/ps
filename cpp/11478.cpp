#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  string s; cin >> s;

  set<string> substr_set;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    for (int j = len; j > 0; j--) { 
      substr_set.insert(s.substr(i, j));
    }
  }

  cout << substr_set.size() << '\n';
}

