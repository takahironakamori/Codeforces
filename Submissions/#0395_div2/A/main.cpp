#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {

  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);

}

long lcm(long a, long b) {

  return a / gcd(a, b) * b;

}

int main() {

  long n, m, z;
  cin >> n >> m >> z;

  long l = lcm(n, m);

  int answer = z / l;
  
  cout << answer << endl;

}