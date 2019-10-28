#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> n(4);
  for (int i = 0; i < 4; i++) {
    cin >> n[i];
  }

  sort(n.begin(), n.end());

  cout << n[3] - n[2] << " ";
  cout << n[3] - n[1] << " ";
  cout << n[3] - n[0] << endl;

}