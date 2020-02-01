#include <bits/stdc++.h>
using namespace std;


int main() {

  vector<string> s;
  string v = "";

  while (getline(cin, v)) {
    s.push_back(v);
  }

  vector<int> count(3);
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < s[i].size(); j++) {
      char s_ = s[i][j];
      if (s_ == 'a' || s_ == 'i' || s_ == 'u' || s_ == 'e' || s_ == 'o') {
        count[i]++;
      }
    }
  }

  string answer = "NO";

  if (count[0] == 5 && count[1] == 7 && count[2] == 5){
    answer = "YES";
  }

  cout << answer << endl;

  return 0;

}
