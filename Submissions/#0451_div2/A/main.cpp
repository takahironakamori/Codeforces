#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int r = n % 10;

  if (r <= 5){
    cout << n - r << endl;
  } else {
    cout << n + 10 - r << endl;
  }
  

}