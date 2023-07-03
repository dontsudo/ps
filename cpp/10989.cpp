#include <iostream>
using namespace std;

int m[10001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, t; cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> t;
    m[t]++;
  }

  for (int i = 0; i < 10001; i++)
    for (int j = 0; j < m[i]; j++)
      cout << i << '\n';
}


