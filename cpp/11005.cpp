#include <iostream>
#include <cmath>
#include <string>
using namespace std;

char itoa(int n) {
  return 0 <= n && n < 10 ?
    '0' + n :
    'A' + n - 10;
}

int main() {
  int N, B;
  string s;
  cin >> N >> B;

  int r;
  while (N > 0) {
    r = N % B;
    N = N / B;
    s = itoa(r) + s;
  }

  cout << s << '\n';
}
