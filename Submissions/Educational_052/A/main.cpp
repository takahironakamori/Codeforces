#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    long long s, a, b, c;
    cin >> s >> a >> b >> c;

    long long answer = s / c;
    answer += answer / a * b;

    cout << answer << endl;

  }

}