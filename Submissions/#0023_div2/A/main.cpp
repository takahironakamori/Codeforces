#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  for (int i = s.size(); 0 < i; i--){
    set<string> answer;
    for (int j = 0; j + i <= s.size(); j++){
      answer.insert(s.substr(j,i));
    }
    if (answer.size() != s.size() - i + 1) {
        cout << i << endl;
        return 0;
      }
  }

  cout << 0 << endl;

  return 0;

}
