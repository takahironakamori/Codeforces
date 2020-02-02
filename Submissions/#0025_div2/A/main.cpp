#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> odd;
  vector<int> even;

  for (int i = 0; i < n; i++){
    int a_;
    cin >> a_;
    if (a_ % 2 == 0){
      even.push_back(i + 1);
    } else {
      odd.push_back(i + 1);
    }
  }

  if (odd.size() == 1) {
    cout << odd[0] << endl;
  } else {
    cout << even[0] << endl;
  }

  return 0;

}
