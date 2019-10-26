#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int answer = 0;

  while (a <= b) {
    
    answer++;

    a *= 3;
    b *= 2;

  }

  cout << answer << endl;

}