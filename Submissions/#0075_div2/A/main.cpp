#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  int count = 1;
  while (count <= m) {
    m -= count;
    count++;
    if (n < count) {
      count = 1;
    }
  }

  cout << m << endl;

}