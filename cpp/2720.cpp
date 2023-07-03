#include <iostream>
using namespace std;

int UNITS[] = {25, 10, 5, 1};

int main() {
  int T; cin >> T;
  while (T--) {
    int C, m; cin >> C;
    for (int i = 0; i < 4; i++) {
      m = C / UNITS[i]; 
      C = C % UNITS[i];
      cout << m << ' ';
    }
    cout << '\n';
  }
}
