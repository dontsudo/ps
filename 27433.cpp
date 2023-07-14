#include <iostream>
using namespace std;

#define ll long long

ll f(int n) {
  return n == 0 ? 1 : n * f(n-1);
}

int main() {
  int n; cin >> n;
  cout << f(n) << '\n';
}
