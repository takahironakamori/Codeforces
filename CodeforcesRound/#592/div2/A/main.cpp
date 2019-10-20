#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  vector<vector<int>> cases(t, vector<int>(5));  
  for (int i = 0; i < t; i++) {
    cin >> cases[i][0] >> cases[i][1] >> cases[i][2] >> cases[i][3] >> cases[i][4];
  }

  vector<string> answer(t);
  for (int i = 0; i < t; i++) {
    int x = ceil((double) cases[i][0] / cases[i][2]);
    int y = ceil((double) cases[i][1] / cases[i][3]);
    if (x + y <= cases[i][4]){
      answer[i] = to_string(x) + " " + to_string(y);
    } else {
      answer[i] = "-1";
    }
  }

  for (int i = 0; i < t; i++) {
    cout << answer[i] << endl;
  }

}