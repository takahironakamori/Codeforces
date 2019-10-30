#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;

    int answer = 0;

    if (c <= h) {
      if (p * 2 <= b) {
        b -= p * 2;
        answer += p * h;
      } else {
        answer += (b / 2) * h;
        b = 0;
      }
      if (f * 2 <= b) {
        answer += f * c;
      } else {
        answer += (b / 2) * c;
      }
    } else {
      if (f * 2 <= b) {
        b -= f * 2;
        answer += f * c;
      } else {
        answer += (b / 2) * c;
        b = 0;
      }
      if (p * 2 <= b) {
        answer += p * h;
      } else {
        answer += (b / 2) * h;
      }
    }

    cout << answer << endl;
  }

}