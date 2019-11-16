#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;
  
  int w = n * 2 - 1;

  n = n - 1;

  for (int i = 0; i < w; i++) {
    for (int j = 0; j < w; j++) {
      int d = n - abs(i - n);
      if (abs(j - n) <= d) {
        answer++;
      }
    }
  }

  cout << answer << endl;

}