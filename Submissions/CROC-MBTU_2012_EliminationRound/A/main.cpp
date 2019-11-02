#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a = 0;
  int b = 0;

  for (int i = 0; i < n; i++) {

    int ping;
    cin >> ping;
    
    int success;
    int lost;
    
    if (ping == 1) {
      cin >> success;
      cin >> lost;
      a += success - lost;
    } else {
      cin >> success;
      cin >> lost;
      b += success - lost;
    }
  }

  if (0 <= a) {
    cout << "LIVE" << endl;
  } else {
    cout << "DEAD" << endl;
  }

  if (0 <= b) {
    cout << "LIVE" << endl;
  } else {
    cout << "DEAD" << endl;
  }

}