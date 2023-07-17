#include <iostream> 
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int n_v, n_e, u, v, cnt = 0;

unordered_map<int, vector<int>> graph;
bool visited[105];

void dfs(int v) { 
  visited[v] = true;
  cnt++;
  for (int adj : graph[v])
    if (!visited[adj]) 
      dfs(adj);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  cin >> n_v >> n_e;
  for (int i = 0; i < n_e; i++) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  dfs(1);

  cout << cnt - 1 << '\n';
}
