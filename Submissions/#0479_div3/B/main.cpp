#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  map<string, int> mp;
  
  for (int i = 0; i < n - 1; i++) {
    string s_ = s.substr(i, 2);
    mp[s_]++;
  }

  string answer = "";
  int maxCount = 0;

  for (auto item:mp) {
    if (maxCount < item.second) {
      maxCount = item.second;
      answer = item.first;
    }
  }

  cout << answer << endl;

}