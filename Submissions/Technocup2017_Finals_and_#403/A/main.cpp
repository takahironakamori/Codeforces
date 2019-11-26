#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<bool> pair(n+1);
  int answer = 0;
  int count = 0;

  for (int i = 0; i < n * 2; i++) {
    int x;
    cin >> x;
    if (pair[x] == false) {
      pair[x] = true;
      count++;
      answer = max(answer, count);
    } else {
      pair[x] = false;
      count--;
    }
  }

  cout << answer << endl;

}