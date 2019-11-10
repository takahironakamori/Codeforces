#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int B = 0;
  int C = 0;

  for (int i = 0; i < n; i++) {
    int A;
    cin >> A;
    if (0 <= A) {
      B += A;
    } else {
      C += A;
    }
  }

  cout << B - C << endl;
  
}