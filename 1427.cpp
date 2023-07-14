#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  string s; cin >> s;
  sort(s.begin(), s.end(), 
    [](char a, char b) {
      return a > b; 
    }
  );

  cout << s << '\n';
}

