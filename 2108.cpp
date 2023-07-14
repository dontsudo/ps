#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <climits>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n; 
  cin >> n;

  vector<int> arr(n);
  unordered_map<int, int> cnt;

  int sum = 0, min_n = INT_MAX, max_n = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    sum += arr[i]; cnt[arr[i]]++;
    if (arr[i] < min_n) min_n = arr[i];
    if (arr[i] > max_n) max_n = arr[i];
  }

  // 1. 산술평균
  cout << (int)round((double)sum / arr.size()) << '\n';

  // 2. 중앙값
  sort(arr.begin(), arr.end());
  cout << arr[arr.size() / 2] << '\n';

  // 3. 최빈값
  int max_cnt = 0;
  for (auto [_, v] : cnt) 
    if (v > max_cnt) 
      max_cnt = v;

  vector<int> most_common;
  for (auto [k, v] : cnt) 
    if (v == max_cnt)
      most_common.push_back(k);

  sort(most_common.begin(), most_common.end());

  cout 
    << (most_common.size() > 1 ? most_common[1] : most_common[0])
    << '\n';

  // 4. 범위 
  cout << max_n - min_n << '\n';
}
