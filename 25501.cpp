#include <iostream>
#include <cstring>
using namespace std; 

int t, cnt;
char word[1001];

int recursion(const char* s, int l, int r) {
  cnt++;
  if (l >= r) return 1;
  else if (s[l] != s[r]) return 0;
  else return recursion(s, l+1, r-1);
}

int isPalindrome(const char* s) {
  return recursion(s, 0, strlen(s) - 1);
}

int main() {
  cin.tie(0); ios::sync_with_stdio(false);
  cin >> t;
  while (t--) {
    cin >> word;
    cout << isPalindrome(word);
    cout << " " << cnt << '\n';
    cnt = 0;
  }
}



