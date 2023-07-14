#include <vector>
#include <cstdio>
using namespace std;

int main() {
  int N, K, exists[26] = {0,}; 
  scanf("%d %d", &N, &K);

  int S; char C; bool valid = true;
  vector<char> res(N, '?');
  auto it = res.begin();
  for (int i = 0; i < K; ++i) {
    scanf("%d %c", &S, &C);
    if (!valid) continue;

    for (int j = 0; j < S; ++j) {
      if (it == res.begin()) 
        it = res.end();
      it--;
    }

    if (
      (exists[C - 'A'] &&  *it == C) || 
      (!exists[C - 'A'] && *it == '?')
    ) {
      *it = C;
      exists[C - 'A'] = 1;
    } else {
      valid = false;
    }
  }

  if (!valid) puts("!");
  else {
    for (int i = 0; i < N; ++i) {
      putchar(*it);
      it++;
      if (it == res.end()) it = res.begin();
    }
    puts("");
  }
}
