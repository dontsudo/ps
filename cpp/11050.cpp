#include <iostream>
using namespace std;

// nCk = 
//   5C2 = 5*4 / 2*1

int C(int n, int k) {
  if (k == 0) return 1;
  int p = 1, q = 1;
  for (int i = 0; i < k; i++) {
    p *= n - i;
    q *= k - i;
  }
  return p / q;
}

int main() {
  int n, k; cin >> n >> k;
  cout << C(n, k) << '\n';
}
