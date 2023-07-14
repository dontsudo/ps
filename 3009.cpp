#include <iostream>
using namespace std;

struct Point {
  int x;
  int y;
};

int main() {
  Point p[4];
  for (int i = 0; i < 3; i++) 
    cin >> p[i].x >> p[i].y;

  if (p[0].x == p[1].x) {
    cout << p[2].x << " ";
  } else if (p[0].x == p[2].x) {
    cout << p[1].x << " ";
  } else {
    cout << p[0].x << " ";
  }

  if (p[0].y == p[1].y) {
    cout << p[2].y << " ";
  } else if (p[0].y == p[2].y) {
    cout << p[1].y << " ";
  } else {
    cout << p[0].y << " ";
  }
}





