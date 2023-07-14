#include <iostream>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int total = 0;
  
  string s;
  cin >> s;

  stack<char> st;
  bool is_laser_cut; 
  for (char c : s) { 
    if (c == '(') {
      is_laser_cut = true;
      st.push(c);
    } 
    else {
      st.pop();
      if (is_laser_cut) { 
        is_laser_cut = false;
        total += st.size();
      } else {  
        total += 1;
      }
    }
  }

  cout << total << '\n';

  return 0;
}

