#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  int min_x, min_y, max_x, max_y;

  int x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    if (i == 0) {
      min_x = max_x = x;
      min_y = max_y = y;
    } else {
      min_x = min(min_x, x);
      max_x = max(max_x, x);
      min_y = min(min_y, y);
      max_y = max(max_y, y);
    }
  }

  cout << (max_x - min_x) * (max_y - min_y) << '\n';
}

