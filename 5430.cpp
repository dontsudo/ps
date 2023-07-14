#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

deque<int> parse(string raw) {
  string strip = raw.substr(1, raw.length() - 2);
  stringstream ss(strip);

  deque<int> dq;
  string token;

  while (getline(ss, token, ',')) 
    dq.push_back(stoi(token));

  return dq;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T; cin >> T;

  while (T--) {
    string p;
    cin >> p;

    int n; 
    cin >> n;

    string raw_str;
    cin >> raw_str;

    deque<int> dq = parse(raw_str);

    bool reversed = false, error = false;
    for (char fn : p) {
      if (fn == 'R') {
        reversed = !reversed;
      } 
      else {
        if (dq.size() == 0) {
          error = true;
          break;
        }

        if (reversed) dq.pop_back();
        else dq.pop_front();
      }
    }

    if (error) 
      cout << "error\n";
    else {
      if (reversed) 
        reverse(dq.begin(), dq.end());

      cout << '[';
      for (int i = 0; i < dq.size(); i++) {
        cout << dq[i];
        if (i != dq.size() - 1)
          cout << ',';
      }
      cout << ']' << '\n';
    }
  }
}
