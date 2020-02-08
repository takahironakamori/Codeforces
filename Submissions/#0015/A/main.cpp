#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, t;
  cin >> n >> t;

  vector<pair<int,int>> house(n);
  for (int i = 0; i < n; i++) {
    int f_, s_;
    cin >> f_ >> s_;
    house[i].first = f_ * 2;
    house[i].second = s_;
  }

  t = t * 2;

  sort(house.begin(), house.end());

  int answer = 0;

  for (int i = 1; i < n; i++) {
    int r_ = house[i].first - house[i].second;
    int l_ = house[i - 1].first + house[i - 1].second;
    if (t == r_ - l_) {
      answer += 1;
    } else if (t < r_ - l_) {
      answer += 2;
    }
  }

  cout << answer + 2 << endl;

  return 0;

}
