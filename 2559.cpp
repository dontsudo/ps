#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, k, sum = 0, max_sum;
  cin >> n >> k;

  vector<int> t(n);
  for (int i = 0; i < n; i++)
    cin >> t[i];

  for (int i = 0; i < k; i++) 
    sum += t[i];

  max_sum = sum;
  for (int i = k; i < n; i++) {
    sum += arr[i] - arr[i - k];
    max_sum = max(max_sum, sum);
  }

  cout << max_sum << '\n';
}

