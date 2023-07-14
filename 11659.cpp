#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m; 

  unordered_map<int, int> acc;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int tmp = 0;
  for (int i = 0; i < n; i++) {
    tmp += arr[i];
    acc[i + 1] = tmp;
  }

  while (m--) {
    int i, j;
    cin >> i >> j;

    cout << acc[j] - acc[i - 1] << '\n';
  }
}

