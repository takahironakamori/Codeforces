#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int l = s.size();
  s += s;

  set<string> st;
  for (int i = 0; i < l; i++) {
    string tmp;
    for (int j = 0; j < l; j++) {
      tmp += s[i+j];
    }
    st.insert(tmp);
  }


  cout << st.size() << endl;

}