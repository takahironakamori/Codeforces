#include <bits/stdc++.h>
using namespace std;

int main() {

  int n,c;
  cin >> n >> c;

  int before = 0;
  int answer = 0;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    if (v - before <= c) {
      answer++;
    } else {
      answer = 1;
    }
    before = v;
  }
  
  cout << answer << endl;

}