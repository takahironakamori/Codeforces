#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s_;
    cin >> s_;
    mp[s_]++;
    if (mp[s_] == 1) {
      cout << "OK" << endl;
    } else {
      int i_ = mp[s_] - 1;
      cout << s_ + to_string(i_) << endl;
    }
  }

}
