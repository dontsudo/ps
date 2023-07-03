#include <iostream>
using namespace std;

int main() {
  int p, q, r;
  cin >> p >> q >> r;
  if (p + q + r == 180) {
    if (p == q && q == r) {
      cout << "Equilateral\n";
    } else if (p == q || p == r || q == r) {
      cout << "Isosceles\n";
    } else {
      cout << "Scalene\n";
    }
  } else {
    cout << "Error\n";
  }
}

