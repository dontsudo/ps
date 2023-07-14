#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

const string CHONGCHONG = "ChongChong";

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n; 
  cin >> n;

  unordered_set<string> dancing;
  dancing.insert(CHONGCHONG);

  string p1, p2;
  for (int i = 0; i < n; i++) {
    cin >> p1 >> p2;

    if (dancing.count(p1) != 0) 
      dancing.insert(p2);

    if (dancing.count(p2) != 0)
      dancing.insert(p1);
  }

  cout << dancing.size() << '\n';
}
