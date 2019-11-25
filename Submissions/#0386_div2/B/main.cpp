#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  string answer = s.substr(n - 1, 1);

  for (int i = 2; i <= n; i++) {
    string s_ = s.substr(s.size() - i, 1);
    answer.insert(answer.size() / 2, s_);
  }

  cout << answer << endl;

}