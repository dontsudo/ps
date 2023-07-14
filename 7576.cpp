#include <iostream>
#include <queue>
#define X first
#define Y second
using namespace std;

int board[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int m, n;
  cin >> m >> n;

  queue<pair<int, int>> q;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
      if (board[i][j] == 1) {
        q.push({i, j});
      }
    }
  }

  while (!q.empty()) {
    auto curr = q.front(); q.pop();

    for (int dir = 0; dir < 4; dir++) {
      int nx = curr.X + dx[dir];
      int ny = curr.Y + dy[dir];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m)
        continue;

      if (board[nx][ny] != 0)
        continue;

      q.push({nx, ny});
      board[nx][ny] = board[curr.X][curr.Y] + 1;
    }
  }

  int max_day = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 0) {
        cout << -1;
        return 0;
      }
      max_day = max(max_day, board[i][j]);
    }
  }

  cout << max_day - 1<< '\n';

  return 0;
}




