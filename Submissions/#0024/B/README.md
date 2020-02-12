### Codeforces Beta Round #24

# B. F1 Champions

  [問題はこちら](https://codeforces.com/problemset/problem/24/B)


- 概要<br>
  F 1 の大会では、上位 10 人に 1 位から順に、25, 18, 15, 12, 10, 8, 6, 4, 2, 1 ポイントが与えられる。<br>
  1 つの大会につき最大 50 人参加している。<br>
  最もポイントが多い人が年間王者となる。<br>
  ポイントが同点の場合は、1 位の回数が多い方、それも同じ場合は、2 位の回数が多い方、同じ場合は、3 位の回数が多い方と順番に調べていく。<br>
  この順位の決め方とは別に、最も 1 位の回数が多い人が年間王者とする決め方もある。<br>
  1 位の回数が多い場合は、年間ポイントが多い方、年間ポイントが同じ場合は、2 位の回数が多い方、同じ場合は、3 位の回数が多い方と順番に調べていく。<br>
  t 回分の大会の結果が与えられる。<br>
  毎回 n 人が参加し、1 位から順番に名前も与えられる。<br>
  それぞれの決め方で年間王者になったレーサーの名前を出力せよ。


- 発想<br>
  レーサー 1 人についてポイントを管理する map と、各順位を何回とったのかを管理する map を用意する。<br>
  順位を管理する map は map<string, map<int,int>> と多次元になる。<br>
  ポイントは、10 位までしかないが、順位を何回とったかは参加人数分 map に追加する。<br>
  ポイントで年間王者を決める場合、ポイントが同じ場合のみ、各順位を何回とったのかで判断する。<br>
  順位の回数で年間王者を決める場合、順位をとった回数が同じ場合、ポイントの大小で決めるが、ポイントも同じ場合は次の順位の回数を調べる。<br>
  場合わけに気をつける。


- コード（C++）

  ```cpp
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
  ```
