#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    
    string t;
    cin >> t;

    vector<int> count(26);

    for (int j = 0; j < t.size(); j++) {
      int k = (int) t[j] - 'a';
      count[k]++;
    }

    string answer = "Yes";
    bool flg = false;
    int change = 0;
    
    for (int j = 0; j < 26; j++) {
      if (2 <= count[j]) {
        answer = "No";
        break;
      } else if (count[j] == 1) {
        if (!flg) {
          flg = true;
          change++;
        }
      } else {
        if(flg) {
          change++;
          flg = false;
        }
      }
    }

    if (answer == "No") {
      cout << answer << endl;
    } else if (change <= 2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

  }

}