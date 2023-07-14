#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<int>& nums, int target, int sum, int idx) {
  if (idx == nums.size()) 
    return sum == target ? 1 : 0;

  return \
    dfs(nums, target, sum + nums[idx], idx + 1) + \
    dfs(nums, target, sum, idx + 1); 
}

int main() {
  int N, S;
  cin >> N >> S;

  vector<int> nums(N);
  for (int i = 0; i < N; i++) 
    cin >> nums[i];

  int result = dfs(nums, S, 0, 0);
  if (S == 0) result -= 1;

  cout << result << endl;
}

