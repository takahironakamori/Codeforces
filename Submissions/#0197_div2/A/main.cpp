#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  vector<int> count(4);
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0) {
      count[(int) s[i] - '0']++;
    }
  }

  string answer = "";

  for (int i = 1; i < 4; i++) {
    for (int j = 0; j < count[i]; j++) {
      answer += to_string(i) + "+";
    }
  }

  cout << answer.substr(0, answer.size() - 1) << endl;

}