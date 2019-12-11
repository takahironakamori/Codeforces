#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;
  cin >> n;

  vector<int> count(26);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    count[(int) s[0] - 'a']++;
  }

  int answer = 0;
  for (int i = 0; i < 26; i++) {
    int class1 = count[i] / 2;
    int class2 = count[i] - class1;
    answer += class1 * (class1 - 1) / 2;
    answer += class2 * (class2 - 1) / 2;
  }

  cout << answer << endl;


}