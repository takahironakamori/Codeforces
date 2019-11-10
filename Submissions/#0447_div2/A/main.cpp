#include <bits/stdc++.h>
using namespace std;

int main() {

  string n;
  cin >> n;

  int answer = 0;
  int count = n.length();

  for (int i = 0; i < count; i++) {
    for (int j = i; j < count; j++) {
      for (int k = j; k < count; k++) {
        if (n[i] == 'Q' && n[j] == 'A' && n[k] == 'Q') {
          answer++;
        }
      }
    }
  }

  cout << answer << endl;

}