#include <bits/stdc++.h>
using namespace std;

int main() {

  string v;
  cin >> v;

  int count = 0;

  for (int i = 0; i < v.size(); i++) {
    if (v[i] == 'a') {
      count++;
    }
  }

  if (count * 2 - 1 < v.size()) {
    cout << count * 2 - 1 << endl;
  } else {
    cout << v.size() << endl;
  }

}