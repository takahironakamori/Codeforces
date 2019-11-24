#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s1, s2;
  cin >> s1 >> s2;
  
  int answer = 0;
  for (int i = 0; i < n; i++) {
    answer += min(10 - abs(s1[i] - s2[i]), abs(s1[i] - s2[i]));
  }
  
  cout << answer << endl;

}