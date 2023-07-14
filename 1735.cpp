#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a%b) : a;
}

int main() {
  int a1, a2, b1, b2;
  cin >> a1 >> b1 
    >> a2 >> b2;

  a1 = a1*b2 + a2*b1;
  b1 = b1*b2;

  int t = gcd(a1, b1);
  cout << a1/t << ' ' << b1/t << '\n';
}
