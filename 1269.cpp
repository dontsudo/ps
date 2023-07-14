#include <iostream>
#include <set>
using namespace std;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int n_a, n_b;
  cin >> n_a >> n_b;

  set<int> a, b; int t;
  for (int i = 0; i < n_a; i++) {
    cin >> t;
    a.insert(t);
  }
  for (int i = 0; i < n_b; i++) {
    cin >> t;
    b.insert(t);
  }

  int common = 0;
  for (auto e : a) 
    if (b.find(e) != b.end()) 
      common++;

  cout << a.size() + b.size() - 2 * common << '\n';
}

