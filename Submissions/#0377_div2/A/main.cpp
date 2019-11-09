#include <bits/stdc++.h>
using namespace std;

int main() {

  int k, r;
  cin >> k >> r;
  
  int answer = 0;
  for (int i = 1; i < 10; i++) {
    answer = i;
    if ((k * i) % 10 == r || (k * i) % 10 == 0) {
      break;
    }
  }
  
  cout << answer << endl;

}