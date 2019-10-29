#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    
    long long a, b, k;
    cin >> a >> b >> k;
    
    long long answer = 0;
    long long c = k / 2;
    
    if (k % 2 == 0) {
      answer += a * c;
    } else {
      answer += a * (c + 1);
    }
    
    answer -= b * c;
    
    cout << answer  << endl;
  }  

}