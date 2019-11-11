#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int q;
  cin >> q;
 
  for (int i = 0; i < q; i++) {
    
    int v;
    cin >> v;
 
    int answer = 0;
 
    bool repeat = true;
 
    while (repeat) {
      if (v % 2 == 0 && 4 <= v) {
        repeat = false;
      } else {
        v++;
        answer++;
      }
    }
 
    cout << answer << endl;
 
  }
 
}