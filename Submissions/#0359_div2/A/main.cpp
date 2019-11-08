#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x;
  cin >> n >> x;

  long long answer = x;
  int count = 0;

  for (int i = 0; i < n; i++) {
    string k;
    cin >> k;
    int d;
    cin >> d;
    if (k == "+") {
      answer += d;
    } else {
      if (d <= answer) {
         answer -= d;
      } else {
        count++;
      }
    } 
  }

  cout << answer << " " << count << endl;

}