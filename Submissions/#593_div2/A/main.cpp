#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;
  cin >> n;
 
  vector<vector<int>> abc(n,vector<int>(3));  
  for (int i = 0; i < n; i++) {
    cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
  }
 
  vector<int> answer(n);
  for (int i = 0; i < n; i++) {
    if ((abc[i][2] / 2) < abc[i][1]) {
      answer[i] += abc[i][2] / 2 * 3;
      abc[i][1] -= abc[i][2] / 2;
    } else {
      answer[i] += abc[i][1] * 3;
      abc[i][1]  = 0;
    }
    if ((abc[i][1] / 2) < abc[i][0]) {
      answer[i] += abc[i][1] / 2 * 3;
    } else {
      answer[i] += abc[i][0] * 3;
    }
  }
 
  for (int i = 0; i < n; i++) {
    cout << answer[i] << endl;
  }
 
}