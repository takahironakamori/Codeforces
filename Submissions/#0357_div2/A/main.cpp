#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string answer = "NO";

  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    int before, after;
    cin >> before >> after;
    if (2400 <= before && before < after) {
      answer = "YES";
    }
  }

  cout << answer << endl;

}