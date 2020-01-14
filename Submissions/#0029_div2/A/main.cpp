#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<pair<int, int>> camel(n);
  for (int i = 0; i < n; i++) {
    int x, d;
    cin >> x >> d;
    camel[i].first = x;
    camel[i].second = x + d;
  }

  string answer = "NO";

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = i + 1; j < n; j++) {
      if (camel[i].first == camel[j].second && camel[i].second == camel[j].first) {
        count++;
      }
    }
    if (count == 1) {
      answer = "YES";
      break;
    }
  }

  cout << answer << endl;

}