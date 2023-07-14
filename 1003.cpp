#include <iostream>
using namespace std;

#define MAX 42

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int dp[MAX] = {1, 0};
  for (int i = 2; i < MAX; i++)
    dp[i] = dp[i-1] + dp[i-2];

  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    cout << dp[N] << ' ' << dp[N+1] << '\n';
  }
}
