#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c, l;
  while (true) {
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 0) 
      break;
    
    l = max(a, max(b, c));
    if (a + b + c > 2*l) {
      if (a == b && b == c)
        puts("Equilateral");
      else if (a == b || a == c || b == c) 
        puts("Isosceles");
      else
        puts("Scalene");
    } else {
      puts("Invalid");
    }
  }
}
