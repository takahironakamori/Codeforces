#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) { 
    
    string s;
    cin >> s;
    
    vector<int> count(26);
    int mx = 0;
    for (int j = 0; j < s.size(); j++) {
      count[s[j] - 'a']++;
      mx = max(mx, count[s[j] - 'a']);
    }

    if (mx == s.size()) {
      cout << "-1" << endl;
    } else {
      for (int j = 0; j < 26; j++) {
        int c = count[j];
        for (int k = 0; k < c; k++) {
          cout << char(j + 97);
        }
      }
      cout << endl;
    }

  }

}