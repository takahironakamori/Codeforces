#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  vector<int> a(26);
  for (int i = 0; i < s.size(); i++) {
    a[(int) s[i] - 97]++;
  }

  for (int i = 25; 0 <= i; i--) {
    if (a[i] != 0) {
      for (int j = 0; j < a[i]; j++) {
        cout << char(i + 97);
      }
      break;
    }
  }

  cout << endl;

}