#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

struct info { 
  int idx;
  int priority;
};

bool has_higher_priority(
  unordered_map<int, int>& counter, 
  int n
) {
  for (int i = n + 1; i <= 9; i++)
    if (counter[i] > 0)
      return true;
  return false;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m, seq = 0;
    cin >> n >> m;

    queue<info> q;
    unordered_map<int, int> counter;

    info tmp;
    for (int i = 0; i < n; i++) {
      cin >> tmp.priority;
      tmp.idx = i;
      q.push(tmp);
      counter[tmp.priority]++;
    }

    while (!q.empty()) {
      if (has_higher_priority(counter, q.front().priority)) {
        q.push(q.front());
        q.pop();
      } else {
        seq++;
        if (q.front().idx == m) {
          cout << seq << '\n';
          break;
        }
        counter[q.front().priority]--;
        q.pop();
      }
    }
  }
  return 0;
}

