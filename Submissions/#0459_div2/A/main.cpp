#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<string> answer(n);

  for (int i = 0; i < n; i++) {
    answer[i] = "o";
  }

  int a, b;
  a = 1;
  b = 1;

  int tmp = 0;

  while (b <= n) {
    answer[b - 1] = "O";
    tmp = b;
    b = b + a;
    a = tmp;
  }

  for (int i = 0; i < n; i++) {
    cout << answer[i];
  }

  cout << endl;
  
}