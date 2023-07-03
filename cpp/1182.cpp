#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int count_subsequence_with_sum(vector<int>& nums, int target_sum) {
  int n = nums.size();
  int count = 0;

  std::function<void(int, int)> find_subsequences = [&](
    int index, 
    int sum
  ) {
    if (sum == target_sum) count++;
    for (int i = index + 1; i < n; i++)
      find_subsequences(i, sum + nums[i]);
  };

  for (int i = 0; i < n; i++)
    find_subsequences(i, nums[i]);

  return count;
}

int main() {
  cin.tie(0); ios::sync_with_stdio(0);

  int n, s;
  cin >> n >> s;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  cout << count_subsequence_with_sum(arr, s) << '\n';
}
