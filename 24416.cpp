#include <cstdio>
using namespace std;

int dp[42], call_count = 0;

int fib(int n) {
  if (n == 1 || n == 2) {
    call_count++;
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int fib_dp(int n)  {
  dp[1] = dp[2] = 1;

  for (int i = 3; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
    call_count++;
  }

  return dp[n];
}

int main() {
  int n;
  scanf("%d", &n);

  call_count = 0;
  fib(n);

  printf("%d ", call_count);

  call_count = 0;
  fib_dp(n);

  printf("%d\n", call_count);
}
