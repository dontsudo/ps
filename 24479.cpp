#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<int, vector<int>> graph;
int visited[100005];
int cnt = 1;

void dfs(int r) {
  visited[r] = cnt++;
  for (auto x : graph[r]) 
    if (!visited[x]) dfs(x);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m, r;
  cin >> n >> m >> r;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for (auto& pair : graph)
    sort(pair.second.begin(), pair.second.end());

  dfs(r);

  for (int i = 1; i <= n; i++)
    cout << visited[i] << '\n';

  return 0;
}
