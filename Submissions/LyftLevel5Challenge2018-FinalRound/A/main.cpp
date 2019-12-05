#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;

  string answer = "White";

  long long x, y;
  cin >> x >> y;

  long long w = x + y - 2;
  long long b = n * 2 - x - y;
  
  if (b < w) {
    answer = "Black";
  }

  cout << answer << endl;

}