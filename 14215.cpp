#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  /**
   * triangle
   * - a + b > c
   *   => (a + b) + (a + b > c ? c : (a + b - 1))
   */

  int longest = max(a, max(b, c));
  cout 
    << a + b + c - longest + \
      (a + b + c > 2*longest ? longest: (a + b + c - longest - 1)) 
    << '\n';
}
