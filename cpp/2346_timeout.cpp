#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false); 
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int diff, target = 0;
  for (int i = 0; i < n; i++) {
    cout << target + 1 << " ";
    diff = a[target]; 
    a[target] = 0;
    if (i == n - 1) {
      cout << "\n";
      break;
    }
    while (diff > 0) { 
      target++;
      if (target == n) target = 0;
      if (a[target] != 0) diff--;
    }
    while (diff < 0) { 
      target--; 
      if (target == -1) target = n - 1;
      if (a[target] != 0) diff++;
    }
  }

  return 0;
}
