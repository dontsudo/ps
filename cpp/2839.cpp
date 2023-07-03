#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  int cnt = n;
  for (int i = 0; i*5 <= n; i++) 
    for (int j = 0; j*3 <= n; j++) 
      if (i*5 + j*3 == n) 
        cnt = min(cnt, i + j);

  cout << (cnt != n ? cnt : -1) << '\n';
}

