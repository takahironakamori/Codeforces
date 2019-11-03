#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string answer = "NO";

  int i = 1;
  int sum = i;
  
  while (sum <= n) {
    if (sum == n) {
      answer = "YES";
      sum = n + 1;
    } else {
      i++;
      sum += i;
    }
  }

  cout << answer << endl;

}