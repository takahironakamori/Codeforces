#include <bits/stdc++.h>
using namespace std;
 
int main() {

  vector<string> s;
  string v = "";
  int mx = 0;
  
  while (getline(cin, v)) {
    mx = max(mx, (int) v.size());
    s.push_back(v);
  }

  for (int i = 0; i < mx + 2; i++ ){
    cout << "*";
  }

  cout << endl;
  int count = 0;

  for (int i = 0; i < s.size(); i++) {
    v = s[i];
    string v_s = "*";
    string v_e = "*";
    int space = (mx - s[i].size()) / 2;
    for (int j = 0; j < space; j++) {
      v_s += " ";
      v_e = " " + v_e;
    }
    if ((mx - s[i].size()) % 2 != 0) {
      if (count % 2 == 0) {
        v_e = " " + v_e;
      } else {
        v_s += " ";
      }
      count++;
    }
    cout << v_s << v << v_e << endl;
    
  }

  for (int i = 0; i < mx + 2; i++ ){
    cout << "*";
  }

  cout << endl;

}