#include <iostream>
#include <cstring>
using namespace std;

int main() {
  int m, n; 
  cin >> m >> n;

  bool prime[10005];
  memset(prime, 1, n+1);
  prime[1] = false;
  for (int i = 2; i <= n; ++i)
    if (prime[i])
      for (int j = i*2; j <= n; j += i) 
        prime[j] = false;

  int min = 0, res = 0;
  for (int i = m; i <= n; i++) {
    if (prime[i]) {
      if (min == 0) min = i;
      res += i;
    }
  }

  if (min == 0) {
    cout << -1 << '\n';
  } else {
    cout << res << '\n' << min << '\n';
  }
}


