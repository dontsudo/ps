#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) 
    cin >> vec[i];

  int res = 0;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++) 
      for (int k = j + 1; k < n; k++)
        if (vec[i] + vec[j] + vec[k] <= m) 
          res = max(res, vec[i] + vec[j] + vec[k]);

  cout << res << '\n';
}


