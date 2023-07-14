#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];

  sort(vec.begin(), vec.end(), greater<int>());

  cout << vec[k - 1] << '\n';
}


