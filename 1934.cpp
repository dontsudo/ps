#include <iostream>
using namespace std;

int main() {
  int t; cin >> t; 
  while (t--) {
    int a, b; cin >> a >> b;
    int n, d;
    n = d = max(a, b);
    while (true) {
      if (n % a == 0 && n % b == 0) 
        break;
      n += d;
    }
    cout << n << '\n';
  }
}
