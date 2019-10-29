#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;
  
  queue<int> groupB;
 
  int countB = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'B') {
      countB++;
    } else {
      if (0 < countB) {
        groupB.push(countB);
      }
      countB = 0;
    }
    if (i == n - 1) {
      if (0 < countB) {
        groupB.push(countB);
      }
    }
  }

  cout << groupB.size() << endl;

  if (0 < groupB.size()) {

    while (!groupB.empty()) {
      cout << groupB.front() << " ";
      groupB.pop();
    }

    cout << endl;
  
  }

}