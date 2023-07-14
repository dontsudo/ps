#include <iostream>
#include <vector>
using namespace std;

int pp[5000];

int main() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < n; i++)
    pp[i] = i + 1;

  int i = 0, cnt = 0, s = n;
  cout << "<";
  while (s > 0) {
    if (pp[i] != 0) {
      cnt++;
      if (cnt == k) {
        cout << pp[i] << (s == 1 ? "" : ", ");
        pp[i] = 0; cnt = 0; s--;
      }
    }
    i = (i + 1) % n;
  }
  cout << ">\n";
}
