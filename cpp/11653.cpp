#include <iostream>
#include <vector>
using namespace std; 

int main() {
  int n; cin >> n;

  vector<bool> prime(n + 1, true);
  prime[1] = false; 
  for (int i = 2; i <= n; i++) 
    if (prime[i]) 
      for (int j = i*2; j <= n; j += i) 
        prime[j] = false;

  int t = 2;
  while (n > 1) {
    if (n % t > 0) {
      while (!prime[++t]);
    } else {
      n /= t;
      cout << t << '\n';
    }
  }
}
