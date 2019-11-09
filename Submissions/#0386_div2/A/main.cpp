#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  int answer = 0;
  for (int i = 1; i <= 250; i++) {
    if (i <= a && (i * 2) <= b && (i * 4) <= c) {
      answer = i + i * 2 + i * 4;
    }
  }
  
  cout << answer << endl;

}