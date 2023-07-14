#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<char, char> dic = {
  {')', '('},
  {'}', '{'},
  {']', '['}
};

bool is_valid(string s) {
  stack<char> st;
  for (char c : s) {
    if (
      c == '(' || c == '{' || c == '['
    ) {
      st.push(c);
    } 
    else if (
      c == ')' || c == '}' || c == ']'
    ) {
      if (st.empty() || dic[c] != st.top())
        return false;
      st.pop();
    }
  }

  return st.empty();
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  while (true) {
    getline(cin, s);
    if (s == ".") 
      break;

    cout << (is_valid(s) ? "yes\n" : "no\n");
  }

  return 0;
}

