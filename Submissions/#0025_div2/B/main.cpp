#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  string answer = "";

  int count = 0;

  if (n % 2 == 1) {
    count = 3;
    answer = s.substr(0,3);
  } else {
    count = 2;
    answer = s.substr(0,2);
  }

  while (count < n) {
    answer += "-";
    answer += s.substr(count, 2);
    count += 2;
  }

  cout << answer << endl;

  return 0;

}
