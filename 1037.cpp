#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;
  
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  cout << arr[0] * arr[arr.size() - 1] << '\n';
}
