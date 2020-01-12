#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  set<int> st;

  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    st.insert(n);
  }

  int current = 0;

  if (1 < st.size()) {
    for(auto x : st) {
      if (current == 1) {
        cout << x << endl;
      }
      current++;
    }
  } else {
    cout << "NO" << endl;
  }

}