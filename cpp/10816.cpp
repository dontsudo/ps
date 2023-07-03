#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int n; cin >> n;

  unordered_map<int, int> mp;
  int c;
  for (int i = 0; i < n; i++) {
    cin >> c;
    mp[c]++;
  }

  int m; cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> c; 
    cout << mp[c] << ' ';
  }
}



