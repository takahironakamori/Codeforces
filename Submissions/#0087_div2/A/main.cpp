#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;
  int current = 0;
  
  for (int i = 0; i < n; i++) {
    int m, p;
    cin >> m >> p;
    current -= m;
    current += p;
    answer = max(answer, current);
  }

  cout << answer << endl;

}