#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  vector<int> score = {25, 18, 15, 12, 10, 8, 6, 4, 2, 1};
  map<string, int> point;
  map<string, map<int, int>> rank;
  while (0 < t) {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      string s_;
      cin >> s_;
      if (i < 10) {
        point[s_] += score[i];
      }
      rank[s_][i]++;
    }

    t--;

  }

  string answer1 = "";
  string answer2 = "";

  int p_ = 0;
  map<int, int> r_;

  for (auto item:point) {
    bool flg = false;
    if (p_ == item.second) {
      for (int i = 0; i < 50; i++) {
        if (r_[i] < rank[item.first][i]) {
          flg = true;
          break;
        } else if (r_[i] == rank[item.first][i]) {
          continue;
        } else {
          break;
        }
      }
    } else if (p_ < item.second) {
      flg = true;
    }
    if (flg) {
      answer1 = item.first;
      p_ = item.second;
      r_ = rank[item.first];
    }
  }

  p_ = 0;
  r_.clear();

  for (auto item:rank) {
    bool flg = false;
    for (int i = 0; i < 50; i++) {
      if (r_[i] < rank[item.first][i]) {
        flg = true;
        break;
      } else if (r_[i] == rank[item.first][i] && rank[item.first][i] != 0) {
        if (p_ < point[item.first]) {
          flg = true;
        } else if (p_ == point[item.first]) {
          continue;
        } else {
          break;
        }
      } else if (r_[i] == rank[item.first][i] && rank[item.first][i] == 0) {
        continue;
      } else {
        break;
      }
    }
    if (flg) {
      answer2 = item.first;
      r_ = item.second;
      p_ = point[item.first];
    }
  }

  cout << answer1 << endl;
  cout << answer2 << endl;

  return 0;

}
