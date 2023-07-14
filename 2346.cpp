#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false); 
  cin.tie(NULL); 
  cout.tie(NULL);

  int n; cin >> n;
  vector <int>v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  int num;
  int index = 0;

  for (int i = 0; i < n; i++) {
    cout << index+1<<' '; //풍선 번호 출력(풍선은 1번부터)
    num = v[index]; //내용물 확인

    v[index] = 0; //풍선 터트림 -- 0은 적혀있지 않다고 했기 때문


    if (i == n - 1) { //마지막은 내용물을 확인하여 index 계산이 필요가 없다.
      cout << '\n';
      break;
    }

    if (num > 0) { //내용이 양수일 때
      for (int j = 0; j < num; j++) {
        index = (index + 1) % n; //범위를 넘어갔을 때 조정
        if (v[index] == 0) j--;
      }
    }
    else { //내용이 음수일 때
      for (int j = 0; j < -num; j++) {
        index = (index - 1);
        if (index < 0) index += n; //범위를 넘어갔을 때 조정
        if (v[index] == 0) j--;
      }
    }

  }

  return 0;
}
