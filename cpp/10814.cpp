#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct User {
  int id;
  int age;
  string name;
};

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  int n; cin >> n;
  vector<User> u(n);
  for (int i = 0; i < n; i++) {
    u[i].id = i;
    cin >> u[i].age >> u[i].name;
  }

  sort(u.begin(), u.end(),
    [](User& a, User& b) {
      return a.age == b.age ? a.id < b.id : a.age < b.age;
    }
  );

  for (int i = 0; i < n; i++)
    cout << u[i].age << ' ' << u[i].name << '\n';
}
