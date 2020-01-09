#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, m, a;
  cin >> n >> m >> a;

  long long answer = (long long) ceil((double) n / a) * ceil((double) m / a);

  cout << answer << endl;

}