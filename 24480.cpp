#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<int, vector<int>> graph;
int visited[100005];
int counter = 1;

void dfs(int r) {
  visited[r] = counter++;
  for (auto adj : graph[r]) 
    if (visited[adj] == 0) 
      dfs(adj);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m, r, u, v;
  cin >> n >> m >> r;
  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for (auto& pair : graph) 
    sort(pair.second.begin(), pair.second.end(), greater<int>());

  dfs(r);
    
  for (int i = 1; i <= n; i++)
    cout << visited[i] << '\n';
}
