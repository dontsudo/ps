#include <iostream>
using namespace std;

/**
 * V: 나무 막대 높이
 * A: 낮에 올라갈 수 있는 높이
 * B: 밤에 내려오는 높이
 * h_max(n): An - B(n-1)
 *  (A-B)n + B >= V 
 *  n >= (V-B)/(A-B)
 */
int main() {
  int A, B, V;
  cin >> A >> B >> V;
  cout << (V - B) / (A - B) + ((V - B) % (A - B) > 0) << '\n';

  /*
  int n = 0, h = 0;
  while (true) {
    n++;
    h += A;
    if (h >= V) break;
    h -= B;
  }

  cout << n << '\n';
  */
}
