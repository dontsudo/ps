#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n; 
  cin >> n;

  vector<int> arr(n);
  vector<int> res(n);

  stack<int> positions;

  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  for (int i = n - 1; i >= 0; i--) {
    while (
      positions.size() > 0 && 
      arr[positions.top()] <= arr[i]
    ) {
      int prev_position = positions.top();
      positions.pop();
      res[prev_position] = i + 1;
    }
    positions.push(i);
  }

  for (auto v : res) cout << v << ' ';
}

