#include <bits/stdc++.h>
using namespace std;

int main() {

  int k, n, s, p;
  cin >> k >> n >> s >> p;

  int total = k * ceil((double) n / s);

  int answer = ceil((double) total / p);

  cout << answer << endl;

}