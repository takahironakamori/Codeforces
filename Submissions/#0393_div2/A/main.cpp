#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, d;
  cin >> m >> d;

  vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  double days_ = days[m - 1] + d - 1;

  cout << ((int) ceil(days_ / 7)) << endl;

}