#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> a(4);
  cin >> a[0] >> a[1] >> a[2] >> a[3];

  string s;
  cin >> s;

  int answer = 0;

  for (int i = 0; i < s.length(); i++) {
    answer += a[s[i] - '0' - 1];
  }

  cout << answer << endl;

}