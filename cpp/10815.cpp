#include <iostream>
#include <set>
using namespace std;

int main() {
  cin.tie(0); 
  ios::sync_with_stdio(0);

  int n, t; cin >> n;
  set<int> s;

  for (int i = 0; i < n; i++) {
    cin >> t;
    s.insert(t);
  }

  int m; cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> t;
    if (s.find(t) != s.end()) 
      cout << 1 << ' ';
    else 
      cout << 0 << ' ';
  }
}


