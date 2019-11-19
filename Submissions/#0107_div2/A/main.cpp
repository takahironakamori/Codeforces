#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int answer = k * l / nl;
  answer = min(answer, c * d);
  answer = min(answer, p / np);

  cout << answer / n << endl;

}