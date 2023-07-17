#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t; 

  while (t--) {
    unordered_map<int, vector<int>> feed_count;
    int n, m, tmp;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
      cin >> tmp;
      feed_count[tmp] = vector<int>();
    }

    for (int i = 0; i < m; i++) {
      cin >> tmp;
      for (const auto& [k, v] : feed_count) {
        if (tmp < k) 
          feed_count[k].push_back(tmp);
      }
    }

    int result = 0;
    for (const auto& [k, v]: feed_count) 
      result += v.size();

    cout << result << '\n';
  }
}


  
