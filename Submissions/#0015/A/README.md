### Codeforces Beta Round #15

# A. Cottage Village

  [問題はこちら](https://codeforces.com/problemset/problem/15/A)

- 概要<br>
  x 軸上に n 個の家が立っている。<br>
  i 番目の家は x<sub>i</sub> の位置に立っていて、敷地は a<sub>i</sub> である。<br>
  敷地が重なっている家はない。<br>
  私は家この x 軸上に敷地が t の家を建てたいと考えている。<br>
  その際、誰かの敷地に隣接した場所に建てたい。<br>
  建てることができる場所は何箇所あるか。


- 発想<br>
  敷地が奇数の場合は、計算に小数点が入ってくるので、倍にして考える。<br>
  x が小さい順に並び替えて、i - 1 番目と i 番目の敷地の差が、<br>
  ・ t と同じ場合は、1 箇所建てることができる場所があり、<br>
  ・ t より大きい場合は、2 箇所建てることができる場所がある。
  これを n 回繰り返す。<br>
  また、n 個の家の両端にも 1 箇所ずつ建てることができる場所があるので、最後の答えに 2 を加える。


- コード（C++）

  ```cpp
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
  ```
