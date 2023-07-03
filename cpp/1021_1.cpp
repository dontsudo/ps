#include <iostream>
using namespace std;

// ? 1 2 3 ?
//   l     r
int q[1005], l = 500, r = 500;

void append(int val) {
  q[r] = val;
  r++;
}

void appendleft(int val) {
  q[l - 1] = val;
  l--;
}

int pop() {
  int val = q[r - 1];
  r--;
  return val;
}

int popleft() {
  int val = q[l];
  l++;
  return val;
}

void rotate() {
  appendleft(pop());
}

int main() {
  int n, m; 
  cin >> n >> m;

  for (int i = 0; i < n; i++)
    append(i + 1);

  int t, dist, res = 0;
  for (int i = 0; i < m; i++) {
    cin >> t;
    for (int cnt = 0; cnt < r - l; cnt++) {
      if (q[l] == t) {
        dist = min(cnt, (r - l) - cnt);
        res += dist;
        popleft();
        break;
      }
      rotate();
    }
  }
  cout << res << "\n";
}



