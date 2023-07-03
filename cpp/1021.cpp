#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {
  int n, m, res = 0;
  cin >> n >> m;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) 
    vec[i] = i + 1;

  int target, diff, pos, head = 0;
  for (int i = 0; i < m; i++) {
    cin >> target;

    pos = head;
    while (vec[pos] != target) 
      pos = (pos + 1) % vec.size();

    diff = abs(head - pos);
    res += min(diff, vec.size() - diff);
    head = pos;

    vec.erase(vec.begin() + pos);
  }

  cout << res << '\n';
}


