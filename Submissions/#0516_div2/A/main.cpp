#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> abc(3);
  cin >> abc[0] >> abc[1] >> abc[2];

  sort(abc.begin(), abc.end());

  if (abc[2] < abc[0]+abc[1]) {
    cout << 0 << endl;
  } else {
    cout << abc[2] - abc[0] - abc[1] + 1 << endl;
  }
}