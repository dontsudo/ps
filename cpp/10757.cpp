#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string a, b, r;
  cin >> a >> b;

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  int t, u = 0;
  for (
    int i = 0; 
    i < max(a.size(), b.size()); 
    i++
  ) {
    t = u;
    if (i < a.size()) {
      t += a[i] - '0';
    }
    if (i < b.size()) {
      t += b[i] - '0';
    }
    u = t / 10; t = t % 10;
    r = (char)(t + '0') + r;
  }

  if (u) r = '1' + r;
  cout << r << '\n';
}


