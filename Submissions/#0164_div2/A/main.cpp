#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<pair<int, int>> ha(n);
  for (int i = 0; i < n; i++) {
    cin >> ha[i].first >> ha[i].second;
  }

  int answer = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j && ha[i].first == ha[j].second) {
        answer++;
      }
    }
  }

  cout << answer << endl;

}