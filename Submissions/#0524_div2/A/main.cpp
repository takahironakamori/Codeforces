#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  int red = n * 2;
  int green = n * 5;
  int blue = n * 8;
  int answer = 0;

  answer += ceil((double) red / k);
  answer += ceil((double) green / k);
  answer += ceil((double) blue / k);

  cout << answer << endl;

}