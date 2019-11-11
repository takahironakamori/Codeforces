#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> count(26);

  for (int i = 0; i < n; i++) {
    int l = (int) s[i];
    count[l - 65]++;
  }

  int answer = count[0];

  for (int i = 1; i < k; i++) {
    answer = min(answer, count[i]);
  }
  
  cout << answer * k << endl;

}