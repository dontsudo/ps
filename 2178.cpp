#include <iostream>
#include <queue>
#include <string>
#define X first
#define Y second
using namespace std;

int board[101][101];
bool vis[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) {
    string tmp; cin >> tmp;
    for (int j = 0; j < m; j++) 
      board[i][j] = int(tmp[j] - '0');
  }

  queue<pair<int, int>> q;
  q.push({0, 0});
  vis[0][0] = true;
  while (!q.empty()) {
    auto curr = q.front(); q.pop();

    for (int dir = 0; dir < 4; dir++) {
      int nx = curr.X + dx[dir];
      int ny = curr.Y + dy[dir];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m) 
        continue;

      if (board[nx][ny] == 0 || vis[nx][ny])
        continue;

      q.push({nx, ny});
      board[nx][ny] = board[curr.X][curr.Y] + 1;
      vis[nx][ny] = true;
    }
  }

  cout << board[n - 1][m - 1] << '\n';
}
