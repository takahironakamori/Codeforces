#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> rate(n);

  string answer = "maybe";

  for (int i = 0; i < n; i++) {

    int a, b;
    cin >> a >> b;

    if (a != b) {
      answer = "rated";
    } else {
      rate[i] = a;
    }

  }

  if (answer == "maybe") {
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (rate[i] < rate[j]) {
          answer = "unrated";
          break;
        }
      }
    }
  }

  cout << answer << endl;

}