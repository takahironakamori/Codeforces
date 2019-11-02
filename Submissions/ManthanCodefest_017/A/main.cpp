#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  map<string, int> hashmap;
  for (int i = 0; i < n; i++) {
    string v;
    cin >> v;
    if (hashmap.count(v) == 0) {
      hashmap[v] = 1;
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

}