#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;
  for (int i = 0; i < n; i++) {
    int p, v, t;
    cin >> p >> v >> t;
    if (1 < (p + v + t)){
      answer++;
    }
  }

  cout << answer << endl;

}