#include <cstdio>
#include <cmath>
using namespace std;

// 2 3(2 + 1) 5(3 + 2) 
// ... a_n 2*a_n-1

int main() {
  int n; scanf("%d", &n);

  long long a = 2;
  for (int i = 0; i < n; i++) 
    a = 2 * a - 1;

  printf("%d\n", (int)pow(a, 2));
}

