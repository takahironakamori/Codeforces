#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string hate = "I hate ";
  string love = "I love ";
  string answer = "";

  for (int i = 0; i < n; i++) {

    if (i % 2 == 0) {
      answer += hate;
    } else {
      answer += love;
    }

    if (i == n - 1) {
      answer += "it";
    } else {
      answer += "that ";
    }

  }

  cout << answer << endl;

}