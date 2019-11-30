#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;
  
  vector<int> color(26);

  for (int i = 0; i < n; i++) {
    color[s[i] - 'a']++;
  }

  string answer = "YES";

  for (int i = 0; i < 26; i++) {
    if (k < color[i]) {
      answer = "NO";
    }
  }

  cout << answer << endl;

}