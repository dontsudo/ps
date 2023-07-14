#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  string s;
  set<string> ss;
  for (int i = 0; i < n; i++) {
    cin >> s;
    ss.insert(s);
  }

  int cnt = 0;
  for (int i = 0; i < m; i++) {
    cin >> s;
    if (ss.find(s) != ss.end())
      cnt++;
  }

  cout << cnt << '\n';
}

