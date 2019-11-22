#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;
  
  int answer = 0;

  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    if (k <= 5 - b) {
      answer++;
    }
  }

  cout << answer / 3 << endl;

}