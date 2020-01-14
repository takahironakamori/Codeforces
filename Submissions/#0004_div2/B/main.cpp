#include <bits/stdc++.h>
using namespace std;

int main() {

  int d, sumTime;
  cin >> d >> sumTime;

  vector<int> mx(d);
  vector<int> mn(d);
  int sumMin = 0;
  int sumMax = 0;

  for (int i = 0; i < d; i++) {
    cin >> mn[i] >> mx[i];
    sumMin += mn[i];
    sumMax += mx[i];
  }

  if (sumMin <= sumTime && sumTime <= sumMax) {
    cout << "YES" << endl;
    vector<int> answer(d);
    int dif = sumMax - sumTime;
    for (int i = 0; i < d; i++) {
      if (mx[i] - dif < mn[i]) {
        answer[i] = mn[i];
        dif -= mx[i] - mn[i];
      } else {
        answer[i] = mx[i] - dif;
        dif = 0; 
      }
    }
    for (int i = 0; i < d; i++) {
      cout << answer[i];
      if (i != d - 1) {
        cout << " ";
      }
    }
    cout << endl;
  } else {
    cout << "NO" << endl;
  }
}