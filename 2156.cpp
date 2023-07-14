#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> grapes(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> grapes[i];
  }

  vector<int> dp(n + 1);
  dp[1] = grapes[1];
  if (n > 1) {
    dp[2] = grapes[1] + grapes[2];
  }

  // dp[i]는 i번째 포도주 잔까지 고려했을 때의 최대 포도주 양
  for (int i = 3; i <= n; i++) {
    dp[i] = max(
      dp[i - 1], // 현재 포함 x
      max(
        dp[i - 2] + grapes[i],                // 현재 포함 o, 연속 1
        dp[i - 3] + grapes[i - 1] + grapes[i] // 현재 포함 o, 연속 2
      )
    );
  }

  cout << dp[n] << endl;

  return 0;
}

