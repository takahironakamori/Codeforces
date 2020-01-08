#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int Y, W;
  cin >> Y >> W;
 
  int v = max(Y, W);

  int count = 0;

  for (int i = v; i <= 6; i++) {
    count++;
  }

  if (count == 1) {
    cout << "1/6" << endl;
  } else if (count == 2) {
    cout << "1/3" << endl;
  } else if (count == 3) {
    cout << "1/2" << endl;
  } else if (count == 4) {
    cout << "2/3" << endl;
  } else if (count == 5) {
    cout << "5/6" << endl;
  } else {
    cout << "1/1" << endl;
  }
 
}