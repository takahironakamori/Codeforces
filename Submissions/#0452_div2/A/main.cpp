#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> count(3);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    count[a]++;
  }

  int answer = 0;

  if (count[2] == 0) {
    answer = count[1] / 3;
  } else if (count[2] <= count[1]) {
    answer = count[2];
    count[1] = count[1] - count[2];
    if (0 < count[1]) {
      answer += count[1] / 3;
    }
  } else {
    answer = count[1];
  }

  cout << answer << endl;

}