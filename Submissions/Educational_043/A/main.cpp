#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> v(2);

  for (int i = 0; i < n; i++) {
    int l = s[i] - '0';
    v[l]++;
  }

  if (s == "0") {
    cout << "0" << endl;
  } else {
    cout << "1";
    for (int i = 0; i < v[0]; i++) {
      cout << "0";
    }
    cout << endl;
  }
  
}