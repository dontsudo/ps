#include <iostream>
using namespace std;
#define ll long long 

ll comb(int n, int k) {
  ll res = 1;
  for (int i = 0; i < k; i++) 
    res *= (n - i) / (k - i);

  return res;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(0);

  int t; 
  cin >> t;
  while (t--) {
    int n, m; 
    cin >> n >> m;
    cout << comb(m, n) << '\n';
  }
}
