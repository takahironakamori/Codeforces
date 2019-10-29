#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<string> v(n);
  string answer = "NO";
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (answer == "NO") {
      if (v[i][0] == 'O' && v[i][1] == 'O') {
        answer = "YES";
        v[i][0] = '+';
        v[i][1] = '+';
      } else if (v[i][3] == 'O' && v[i][4] == 'O'){
        answer = "YES";
        v[i][3] = '+';
        v[i][4] = '+';
      }
    }
  }
  
  cout << answer << endl;
  if (answer == "YES") {
    for (int i = 0; i < n; i++) {
      cout << v[i] << endl;
    }
  }

}