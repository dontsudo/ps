#include <iostream>
using namespace std;

int combination(int n, int r) {
  int dp[30][30] = {0};

  for (int i = 0; i <= n; i++) {
    dp[i][0] = 1; // nCr = 1 (r = 0)
    dp[i][i] = 1; // nCr = 1 (r = n)
  }

  for (int i = 2; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }

  return dp[n][r];
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, M;
    cin >> N >> M;

    int result = combination(M, N);
    cout << result << endl;
  }

  return 0;
}

