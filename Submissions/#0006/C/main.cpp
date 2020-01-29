#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  vector<int> alice(n);
  vector<int> bob(n);

  alice[0] = t[0];
  bob[0] = t[n - 1];

  for (int i = 1; i < n; i++) {
    alice[i] = alice[i - 1] + t[i];
    bob[i] = bob[i - 1] + t[n - i - 1];
  }

  int aliceAnswer = 0;
  int bobAnswer = 0;

  for (int i = 0; i < n; i++) {
    if (alice[i] <= bob[n - i - 1]) {
      aliceAnswer++;
    } else {
      bobAnswer++;
    }
  }

  cout << aliceAnswer << " " << bobAnswer << endl;

}
