#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n), x_(n);
  for (int i = 0; i < n; i++) 
    cin >> x[i];

  copy(x.begin(), x.end(), x_.begin());
  sort(x_.begin(), x_.end());

  int acc = 0;
  unordered_map<int, int> m;
  for (int i = 0; i < x_.size(); i++) 
    if (m.find(x_[i]) == m.end())
      m[x_[i]] = acc++;

  for (int i = 0; i < x_.size(); i++) 
    cout << m[x[i]] << ' ';
}

