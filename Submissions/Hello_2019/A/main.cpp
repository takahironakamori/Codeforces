#include <bits/stdc++.h>
using namespace std;

int main() {

  string t;
  cin >> t;

  string answer = "NO";

  for (int i = 0; i < 5; i++) {
    string card;
    cin >> card;
    if (t[0] == card[0] || t[1] == card[1]) {
      answer = "YES";
      break;
    }
  }

  cout << answer << endl;

}