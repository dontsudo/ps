#include <iostream>
#include <vector> #include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

int n, m, r;
int counter = 1;

unordered_map<int, vector<int>> graph;
int visited[100005];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m >> r;

  int u, v;
  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for (auto& pair : graph)
    sort(pair.second.begin(), pair.second.end(), greater<int>());

  queue<int> q;
  q.push(r);
  visited[r] = counter++;

  while (!q.empty()) {
    int curr = q.front(); q.pop();
    for (int adj : graph[curr]) {
      if (visited[adj] == 0) {
        q.push(adj);
        visited[adj] = counter++;
      }
    }
  }

  for (int i = 1; i <= n; i++)
    cout << visited[i] << '\n';
}

