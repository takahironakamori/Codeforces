#include <bits/stdc++.h>
using namespace std;


int main() {

  string n;
  cin >> n;

  int answer = 0;
  bool flg = false;
  for (int i = 0; i < n.size(); i++) {
    if (1 <= n[i] - '0' || flg) {
      if (1 < n[i] - '0') {
        flg = true;
      }
      answer += pow(2, n.size() - i - 1);
    }
  }

  cout << answer << endl;

  return 0;

}
