#include <cstdio>
using namespace std;

int main() {
  int m = 1, n = 1, x;
  scanf("%d", &x);
  for (int i = 0; i < x - 1; i++) {
    if ((m + n) % 2 == 0) {
      if (m == 1) {
        n++;
      } else {
        m--;
        n++;
      }
    } else {
      if (n == 1) {
        m++;
      } else {
        m++;
        n--;
      }
    }
  }
  printf("%d/%d\n", m, n);
}
