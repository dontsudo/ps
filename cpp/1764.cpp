#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int n, m; cin >> n >> m;

  string p;
  set<string> s;
  vector<string> r;
  for (int i = 0; i < n + m; i++) {
    cin >> p;
    auto it = s.find(p);
    if (it != s.end()) {
      r.push_back(p);
      s.erase(it); 
    } else {
      s.insert(p);
    }
  }

  sort(r.begin(), r.end());

  cout << r.size() << '\n';
  for (string pp : r) 
    cout << pp << '\n';
}

