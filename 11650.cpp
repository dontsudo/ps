#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Point {
  int x;
  int y;
};

int main() {
  int n; cin >> n;
  vector<Point> a(n);

  for (int i = 0; i < n; i++) 
    cin >> a[i].x >> a[i].y;

  sort(a.begin(), a.end(), 
    [](Point &a, Point &b) {
      return a.x == b.x ? a.y < b.y : a.x < b.x;
    }
  );

  for (int i = 0; i < n; i++) 
    cout << a[i].x << ' ' << a[i].y << '\n';
}

