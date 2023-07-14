#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int p, q;
  while (true) {
    cin >> p >> q;
    if (p == 0 && q == 0)
      break;

    if (p > q) cout << "Yes\n";
    else cout << "No\n";
  }
}

