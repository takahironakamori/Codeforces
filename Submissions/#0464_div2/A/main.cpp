#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mp[i] = a - 1;
  }

  string answer = "NO";

  for (int i = 0; i < n; i++) {
    int v1 = mp[i];
    int v2 = mp[v1];
    int v3 = mp[v2];
    if (i == v3) {
      answer = "YES";
      break;
    }
  }

  cout << answer << endl;
  
}