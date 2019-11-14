#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    vector<int> a({l1, r1, l2, r2});

    int answer1 = 0;
    int answer2 = 0;

    for (int i = 0; i < a.size(); i++) {
      for (int j = 0; j < a.size(); j++) {
        if (l1 <= a[i] && a[i] <= r1 && l2 <= a[j] && a[j] <= r2 && a[i] != a[j]) {
          answer1 = a[i];
          answer2 = a[j];
        }
      }
    } 

    cout << answer1 << " " << answer2 << endl;

  }

}