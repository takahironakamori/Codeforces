#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  
  int link = 0;
  int pearl = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'o') {
      pearl++;
    } else {
      link++;
    }
  }

  if (link == 0 || pearl == 0){
    cout << "YES" << endl;
  } else {
    if (link % pearl == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

}