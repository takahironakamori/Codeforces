#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int t;
  cin >> t;
 
  while (0 < t){
 
    int a, b, n;
    cin >> a >> b >> n;
 
    switch (n % 3) {
      case 0:
        cout << a << endl;
      break;
      case 1:
        cout << b << endl;
      break;
      default:
        cout << (a ^ b) << endl;
    }
 
    t--;
    
  }
 
}