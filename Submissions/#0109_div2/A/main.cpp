#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxV = a[0];
  int minV = a[0];
  int answer = 0;

  for (int i = 1; i < n; i++) {
    if (maxV < a[i]) {
      maxV = a[i];
      answer++;
    }
    if (a[i] < minV) {
      minV = a[i];
      answer++;
    }
  }
  
  cout << answer << endl;

}