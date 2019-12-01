#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  double answer = 100000000;

  for (int i = 0; i < n; i++) {
    double a, b;
    cin >> a >> b;
    answer = min(answer, a * m / b);
  }

  printf("%.16f", answer);
  printf("\n");

}