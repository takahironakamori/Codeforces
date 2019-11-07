#include <bits/stdc++.h>
using namespace std;

int main() {

  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;

  int answer = d1 + d2 + d3;

  answer = min(answer, d1 + d1 + d2 + d2);

  answer = min(answer, d1 + d1 + d3 + d3);

  answer = min(answer, d2 + d2 + d3 + d3);

  cout << answer << endl;

}