#include <bits/stdc++.h>
using namespace std;

int main() {

  int k2, k3, k5, k6;
  cin >> k2 >> k3 >> k5 >> k6;
  
  int count = min(k2, k5);
  
  count = min(count, k6);

  int answer = count * 200 + count * 50  + count * 6;

  count = min(k3, k2 - count);

  answer += count * 30 + count * 2;
  
  cout << answer << endl;

}