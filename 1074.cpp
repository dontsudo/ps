#include <iostream>
#include <cmath>
using namespace std;

int Z(int n, int r, int c) {
  if (n == 0) return 0;

  int range = pow(2, n - 1);
  int area = range * range;

  if (r < range && c < range) 
    return Z(n - 1, r, c);
  else if (r < range && c >= range) 
    return area + Z(n - 1, r, c - range);
  else if (r >= range && c < range)
    return 2 * area + Z(n - 1, r - range, c);
  else 
    return 3 * area + Z(n - 1, r - range, c - range);
}

int main() {
  cin.tie(0); 
  ios::sync_with_stdio(0);

  int n, r, c;
  cin >> n >> r >> c;

  cout << Z(n, r, c) << endl;
}
