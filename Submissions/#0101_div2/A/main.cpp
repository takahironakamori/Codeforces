#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, t, r;
  cin >> s >> t >> r;

  string answer = "YES";

  vector<int> countA(26);

  for (int i = 0; i < s.size(); i++) {
    int v =(int) s[i] - 65;
    countA[v]++;
  }

  for (int i = 0; i < t.size(); i++) {
    int v =(int) t[i] - 65;
    countA[v]++;
  }

  vector<int> countB(26);

  for (int i = 0; i < r.size(); i++) {
    int v =(int) r[i] - 65;
    countB[v]++;
  }

  for (int i = 0; i < 26; i++) {
    if (countA[i] != countB[i]){
      answer = "NO";
      break;
    }
  }

  cout << answer << endl;

}