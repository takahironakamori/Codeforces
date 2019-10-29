#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int m = 0;
  int c = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (a != b) {
      if (a < b) {
        c++;
      } else {
        m++;
      }
    }
  }

  if (m == c) {
    cout << "Friendship is magic!^^" << endl;
  } else if (c < m) {
    cout << "Mishka" << endl; 
  } else {
    cout << "Chris" << endl;
  }

}