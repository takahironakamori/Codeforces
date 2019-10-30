#include <bits/stdc++.h>
using namespace std;

int main() {

  int s, v1, v2, t1, t2;
  cin >> s >> v1 >> v2 >> t1 >> t2;

  int r1 = t1 * 2 + v1 * s;
  int r2 = t2 * 2 + v2 * s;

  if (r1 == r2) {
    cout << "Friendship" << endl;
  } else if (r1 < r2) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }

}