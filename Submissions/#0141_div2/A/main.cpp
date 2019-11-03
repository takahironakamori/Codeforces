#include <bits/stdc++.h>
using namespace std;

int main() {

  set<int> st;

  for (int i = 0; i < 4; i++) {
    int s = 0;
    cin >> s;
    st.insert(s);
  }

  cout << 4 - st.size() << endl;

}