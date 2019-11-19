#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  int maxV = 0;
  int maxC = 0;
  int minV = 999;
  int minC = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (maxV < a) {
      maxV = a;
      maxC = i+1;
    }
    if (a <= minV) {
      minV = a;
      minC = i+1;
    }
  } 

  if (minC < maxC) {
    cout << maxC - 2 + n - minC << endl;
  } else {
    cout << maxC - 1 + n - minC << endl;
  }
}