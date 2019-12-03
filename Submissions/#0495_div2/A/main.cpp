#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, d;
  cin >> n >> d;

  vector<int> x(n);
  
  set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    st.insert(x[i] - d);
    st.insert(x[i] + d);
  }

  int answer = 0;

  for (auto v : st) {
    bool flg = true;
    for (int i = 0; i < n; i++) {
      if (abs(x[i] - v) < d) {
        flg = false;
        break;
      }
    }
    if (flg) {
      answer++;
    }
  }

  cout << answer << endl;

}