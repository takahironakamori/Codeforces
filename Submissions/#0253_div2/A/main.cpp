#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  getline(cin, s);

  set<char> st;

  for (int i = 0; i < s.length(); i++) {
    int n = (int) s[i];
    if (97 <= n && n <= 122) {
      st.insert(s[i]);
    }
  }

  cout << st.size() << endl;
 
}