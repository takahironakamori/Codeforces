#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string t;
  cin >> t;
 
  string answer = "";

  int count1 = 0;
  int count2 = 0;

  for (int i = 1; i <= t.size(); i++) {
    if (t.size() % 2 == 0) {
      if (i % 2 == 1){
        answer += t[t.size() - 1 - count1];
        count1++;
      } else {
        answer += t[count2];
        count2++;
      }
    } else {
      if (i % 2 == 1){
        answer += t[count1];
        count1++;
      } else {
        answer += t[t.size() - 1 - count2];
        count2++;
      }
    }
  }

  reverse(answer.begin(), answer.end());

  cout << answer << endl;
 
}