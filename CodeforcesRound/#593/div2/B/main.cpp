#include <bits/stdc++.h>
using namespace std;

int main() {

  int l, r;
  cin >> l >> r;

  int answer = -1;

  for (int i = l; i <= r; i++) {

    string s = to_string(i);
    vector<int> v(10);

    for (int j = 0; j < s.size(); j++) {
      v[(s.at(j) - '0')]++;
    }

    int c = 0;

    for (int j = 0; j < 10; j++) {
      if(1 < v[j]){
        c = 1;
        break;
      }
    }

    if (c == 0) {
      answer = i;
      break;
    }

  }

  cout << answer << endl;

  return 0;

}