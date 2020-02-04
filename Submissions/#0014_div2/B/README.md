### Codeforces Beta Round #14 (Div 2 Only)

# B. Young Photographer

  [問題はこちら](https://codeforces.com/problemset/problem/14/B)

- 概要<br>
  写真家の Bob は x<sub>0</sub> の位置にいる。<br>
  n 人分のアスリートの移動する予定が与えられる。<br>
  i 番目のアスリートは a<sub>i</sub> から b<sub>i</sub> へ移動する。<br>
  x<sub>0</sub> が a<sub>i</sub> から b<sub>i</sub> の間であれば、写真を撮ることができる。<br>
  1 度しか移動できない状況で、n 人のアスリート全員の写真を撮るには、最低どれだけ移動すればいいか。<br>
  全員撮ることができない場合は、-1 を出力せよ。


- 発想<br>
  a<sub>i</sub> と b<sub>i</sub> を pair にして配列に入れるが、<br>
  b<sub>i</sub> < a<sub>i</sub> の場合は a<sub>i</sub> と b<sub>i</sub> を入れ替える。<br>
  配列に入れたら、すべての a<sub>i</sub> と b<sub>i</sub> で重なる部分を探す。<br>
  b<sub>j</sub> が a<sub>i</sub> より小さいまたは、b<sub>j</sub> が b<sub>i</sub> より大きい場合は、<br>
  重なる部分がないので -1 を出力する。<br>
  すべての a<sub>i</sub> と b<sub>i</sub> で重なる部分を、A から B までとすると、<br>
  A ≦ x<sub>0</sub> ≦ B なら移動不要で、0 を出力する。<br>
  上記を満たさない場合は、x から A までの距離と x から B までの距離の小さい方が回答となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, x;
    cin >> n >> x;

    vector<pair<int,int>> ab(n);
    for (int i = 0; i < n; i++) {
      cin >> ab[i].first >> ab[i].second;
      if (ab[i].second < ab[i].first) {
        swap(ab[i].first, ab[i].second);
      }
    }

    int answer = 0;

    int mn = ab[0].first;
    int mx = ab[0].second;
    for (int i = 1; i < n; i++) {
      if (ab[i].second < mn || mx < ab[i].first) {
        answer = -1;
        break;
      } else {
        mn = max(ab[i].first, mn);
        mx = min(ab[i].second, mx);
      }
    }

    if (answer != -1) {
      if (mn <= x && x <= mx) {
        answer = 0;
      } else {
        answer = min(abs(mn - x), abs(mx - x));
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
