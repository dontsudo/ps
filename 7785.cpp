#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
  cin.tie(0); ios::sync_with_stdio(0);

  int n; cin >> n;
  set<string> work_people;

  string people, action;
  for (int i = 0; i < n; i++) {
    cin >> people >> action;
    if (action == "enter") {
      work_people.insert(people);
    } else {
      auto it = work_people.find(people);
      work_people.erase(it);
    }
  }

  vector<string> sorted(work_people.begin(), work_people.end());
  sort(sorted.begin(), sorted.end(), std::greater<string>());

  for (const string &s : sorted) 
    cout << s << '\n';

}
