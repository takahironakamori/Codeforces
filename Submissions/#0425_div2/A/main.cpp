#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n, k;
  cin >> n >> k;

  long long allTurn = n / k;

  if (allTurn % 2 == 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}