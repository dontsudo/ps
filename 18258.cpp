#include <bits/stdc++.h>
using namespace std;
const int MX = 10000005;
int dat[MX], head, tail;

void push(int x) { 
  dat[tail++] = x; 
}

void pop() { 
  head++; 
}

int front() {
  return dat[head];
}

int back() {
  return dat[tail-1];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;

  while (n--) {
    string q; cin >> q;
    if (q == "push") {
      int v; cin >> v;
      push(v);
    } 

    else if (q == "pop") {
      if (tail == head) 
        cout << -1 << '\n';
      else {
        cout << front() << '\n';
        pop();
      }
    }

    else if (q == "size") {
      cout << tail-head << '\n';
    }

    else if (q == "empty") {
      cout << (tail == head) << '\n';
    }

    else if (q == "front") {
      if (tail == head) cout << -1 << '\n';
      else cout << front() << '\n';
    }

    else if (q == "back") {
      if (tail == head) cout << -1 << '\n';
      else cout << back() << '\n';
    }
  }
}
