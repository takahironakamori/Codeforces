#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x;
  cin >> n >> x;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    sum += c;
  }

  sum = abs(sum);

  cout << ceil((double)sum / x) << endl;

}