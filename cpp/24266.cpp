#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  long long count = 0;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= n; ++j) 
      for (int k = 1; k <= n; ++k)
        count++;

  cout << count << '\n' << 3 << '\n';
}
