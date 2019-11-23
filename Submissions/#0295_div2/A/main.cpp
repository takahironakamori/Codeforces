#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;
  
  vector<int> count(26);
  for (int i = 0; i < s.size(); i++) {
    int s_ =(int) s[i];
    if (65 <= s_ && s_ <= 90) {
      count[s_ - 65]++;
    } else {
      count[s_ - 97]++;
    }
  }

  string answer = "YES";
  
  for (int i = 0; i < 26; i++) {
    if (count[i] == 0) {
      answer = "NO";
      break;
    }
  }
  
  cout << answer << endl;

}