#include <iostream>
using namespace std;

int fn(int n) {
  if (n == 0 || n == 1) return n;
  else return fn(n - 1) + fn(n - 2);
}

int main() {
  int n; cin >> n;
  cout << fn(n) << '\n';
}

