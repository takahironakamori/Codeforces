#include <bits/stdc++.h>
using namespace std;

int main() {

  int y, b, r;
  cin >> y >> b >> r;

  int answer = min(y + 2, min(b + 1, r));

  cout << answer * 3 - 3 << endl;

}