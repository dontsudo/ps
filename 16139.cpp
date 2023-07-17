#include <iostream>
#include <string>
using namespace std;

int counter[26][2005];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int q; 

  cin >> s >> q;

  counter[s[0] - 'a'][0] = 1;
  for (int i = 1; i < s.size(); i++) {
    for (int j = 0; j < 26; j++) {
      if (s[i] - 'a' == j) 
        counter[j][i] = counter[j][i - 1] + 1;
      else 
        counter[j][i] = counter[j][i - 1];
    }
  }

  while (q--) {
    char a;
    int l , r, cnt = 0;

    cin >> a >> l >> r;

    if (l == 0) 
      cout << counter[a - 'a'][r] << '\n';
    else
      cout << counter[a - 'a'][r] - counter[a - 'a'][l - 1] << '\n';
  }
}
