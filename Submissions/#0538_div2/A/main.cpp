#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, y, z, a, b, c;
  cin >> x >> y >> z >> a >> b >> c;

  string answer = "YES";

  if (a < x) {
    answer = "NO";
  }

  if ((a + b) - x < y) {
    answer = "NO";
  }

  if ((a + b + c - x - y) < z) {
    answer = "NO";
  }

  cout << answer << endl;

}