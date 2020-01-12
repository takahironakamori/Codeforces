#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, d;
  cin >> n >> d;

  vector<int> b(n);

  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int answer = 0;

  for (int i = 1; i < n; i++) {
    if (b[i] <= b[i - 1]) {
      if (b[i] == b[i - 1]) {
        answer++;
        b[i] += d;
      } else {
        int count = (b[i - 1] - b[i]) / d + 1;
        b[i] += count * d;
        answer += count;
      }
    }
  }

  cout << answer << endl;

}