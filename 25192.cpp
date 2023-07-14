#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, cnt = 0;
  cin >> n;

  set<string> greeting;

  string log;
  for (int i = 0; i < n; i++) {
    cin >> log;
    if (log == "ENTER") {
      greeting.clear();
    } else if (greeting.count(log) == 0){
      greeting.insert(log);
      cnt++;
    }
  }

  cout << cnt << '\n';
}


