#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  int ax = 0, bx = 0;
  while (!(ax == n || bx == m)) {
    if (a[ax] < b[bx]) cout << a[ax++] << ' ';
    else cout << b[bx++] << ' ';
  }

  while (ax < n) cout << a[ax++] << ' ';
  while (bx < m) cout << b[bx++] << ' ';
}


