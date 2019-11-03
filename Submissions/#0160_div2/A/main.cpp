#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  int answer = 0;
  for (int i = 0; i < n; i++) {
    int count = 0;
    string a;
    cin >> a;
    for (int j = 0; j < a.size(); j++) {
      if (a[j] == '4' || a[j] == '7') {
        count++;
      }
    }
    if (count <= k) {
      answer++;
    }
  }

  cout << answer << endl;

}