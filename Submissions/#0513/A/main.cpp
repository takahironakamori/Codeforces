#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> num(10);

  for (int i = 0; i < n; i++) {
    int v = s[i] - '0';
    num[v]++; 
  }

  cout << min(n/11, num[8]) << endl;

}