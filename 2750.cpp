#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n; 
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; i++)
    cin >> vec[i];

  std::sort(vec.begin(), vec.end());

  for (int v : vec) 
    cout << v << '\n';
}

