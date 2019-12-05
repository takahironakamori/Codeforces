#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  string answer = "Yes";

  set<string> st;
  for (int i = 0; i < n; i++) {
    st.insert(s.substr(i,1));
  }

  if (st.size() == n && st.size() != 1) {
    answer = "No";
  }

  cout << answer << endl;

}