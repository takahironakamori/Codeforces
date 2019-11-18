#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int current = 1;

  for (int i = 1; i < n; i++) {
    current += i;
    if (n < current) {
      current = current - n;
    }
    cout << current << " ";
  }

  cout << endl;

}