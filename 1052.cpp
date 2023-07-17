#include <iostream>
using namespace std;

int bitcnt(int x) {
  if (x == 0) return 0;
  return bitcnt(x >> 1) + (x & 1);
}

int main() {
  int n, k, r = 0;
  cin >> n >> k;

  while (bitcnt(n) > k) 
    r += n & -n, n += n & -n;

  cout << r << '\n';
}
    
  

