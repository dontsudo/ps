#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  cin >> N >> M;

  unordered_map<string, int> freq;

  string word;
  for (int i = 0; i < N; i++) {
    cin >> word;
    if (word.size() >=  M) 
      freq[word]++;
  }

  vector<pair<string, int>> res(freq.begin(), freq.end());
  sort(res.begin(), res.end(),
      [&](const auto& a, const auto& b) {
        if (a.second != b.second)
          return a.second > b.second;

        else if (a.first.size() != b.first.size())
          return a.first.size() > b.first.size();

        else
          return a.first < b.first;
      });

  for (auto v : res) cout << v.first << '\n';
}

