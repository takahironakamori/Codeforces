#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, d;
  cin >> n >> d;

  int answer = 0;
  int win = 0;

  for (int i = 0; i < d; i++) {
    string o;
    cin >> o;
    vector<int> count(2);
    for (int j = 0; j < o.size(); j++) {
      if (o[j] == '0') {
        count[0]++;
      } else {
        count[1]++;
      }
    }
    if (count[1] != n) {
      win++;
    } else {
      answer = max(answer, win);
      win = 0;
    }
  }

  answer = max(answer, win);

  cout << answer << endl;

}