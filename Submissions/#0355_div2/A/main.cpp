#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, h;
  cin >> n >> h;

  int answer = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (h < a) {
      answer += 2;
    } else {
      answer++;
    }
  }

  cout << answer << endl;

}