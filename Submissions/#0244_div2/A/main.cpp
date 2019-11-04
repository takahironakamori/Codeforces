#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;
  int police = 0;
  
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == -1) {
      if (0 < police) {
        police--;
      } else {
        answer++;
      }
    } else {
      police += a;
    }
  }

  cout << answer << endl;
  
}