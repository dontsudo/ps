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
  vector<Point> ps(n);
  for (int i = 0; i < n; i++)
    cin >> ps[i].x >> ps[i].y;

  sort(ps.begin(), ps.end(), 
    [](Point &a, Point &b) {
      return a.y == b.y ? a.x < b.x : a.y < b.y;
    }
  );

  for (int i = 0; i < n; i++)
    cout << ps[i].x << ' ' <<  ps[i].y << '\n';
}
