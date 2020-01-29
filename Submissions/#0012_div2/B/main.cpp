#include <bits/stdc++.h>
using namespace std;

int main() {

  string n, m;
  cin >> n >> m;

  vector<char> v;
  for (int i = 0; i < n.size(); i++) {
    v.push_back(n[i]);
  }

  sort(v.begin(), v.end());

  string answer = "";
  int p = v.size() + 10;

  for (int i = 0; i < v.size(); i++) {
    if (v[i] != '0') {
      p = i;
      break;
    }
  }

  if (p != v.size() + 10) {
    answer += v[p];
  }

  for (int i = 0; i < v.size(); i++) {
    if (i != p) {
      answer += v[i];
    }
  }

  if (m == answer) {
    cout << "OK" << endl;
  } else {
    cout << "WRONG_ANSWER" << endl;
  }

}
