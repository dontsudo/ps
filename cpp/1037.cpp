#include <iostream> 
using namespace std;

#define ll long long
#define max(a, b) (a > b ? a : b)

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int m = 0, k; cin >> k; 
  ll t, r = 1;
  for (int i = 0; i < k; i++) {
    cin >> t;
    r = lcm(r, t);
    m = max(m, t);
  }

  if (r == m) r *= 2;

  cout << r << '\n';
}


