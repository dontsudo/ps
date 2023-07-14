#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
  string N; int B;
  cin >> N >> B;

  int p, r = 0;
  for (int i = 0; i < N.size(); ++i) {
    p = N.size() - 1 - i;
    r += '0' <= N[p] && N[p] <= '9' ? 
      (N[p] - '0') * pow(B, i) :
      (N[p] - 'A' + 10) * pow(B, i);
  }

  cout << r << '\n';
}

