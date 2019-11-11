#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, y, z, t1, t2, t3;
  cin >> x >> y >> z >> t1 >> t2 >> t3;

  string answer = "YES";

  int d1 = abs(x - y);
  int d2 = abs(x - y) + abs(x - z);

  if (d1 * t1 < d2 * t2 + t3 * 3) {
    answer = "NO";
  }
  
  cout << answer << endl;

}