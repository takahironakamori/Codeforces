#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, v;
  cin >> n >> v;

  int answer = v;

  if (n - 1 <= v) {
    answer = n - 1;
  }

  for (int i = 2; i <= n - v; i++){
    answer += i;
  }

  cout << answer << endl;

}