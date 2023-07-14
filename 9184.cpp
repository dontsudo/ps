#include <cstdio>
using namespace std;

int dp[51][51][51];

int w(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0)
    return 1;

  else if (dp[a][b][c])
    return dp[a][b][c];

  else if (a > 20 || b > 20 || c > 20) 
    dp[a][b][c] = w(20, 20, 20);

  else if (a < b && b < c) 
    dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);

  else 
    dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

  return dp[a][b][c];
}

int main() {
  int a, b, c;

  while (true) {
    scanf("%d %d %d", &a, &b, &c);
    if (a == -1 && b == -1 && c == -1) 
      break;

    printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
  }
}
