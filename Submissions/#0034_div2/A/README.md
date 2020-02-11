### Codeforces Beta Round #34 (Div. 2)

# A. Reconnaissance 2

  [問題はこちら](https://codeforces.com/problemset/problem/34/A)


- 概要<br>
  n 人の人が円状に並んでいて、それぞれの人の身長 a が与えられる。<br>
  隣り合う 2 人の人の身長の差が最小になっているところは何人目と何人目の場合か。


- 発想<br>
  a<sub>i</sub> と a<sub>i+1</sub> の差の絶対値の最小になっている場所を探す。<br>
  i が n - 1 の人だったら i + 1 を 0 に置き換えて絶対値を計算する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int mn = 1000;
    vector<int> answer(2);

    for (int i = 0; i < n; i++) {
      int abs_ = 0;
      if (i != n - 1) {
        abs_ = abs(a[i] - a[i + 1]);
      } else {
        abs_ = abs(a[i] - a[0]);
      }
      if (abs_ < mn) {
        mn = abs_;
        if (i != n - 1) {
          answer[0] = i;
          answer[1] = i + 1;
        } else {
          answer[0] = i;
          answer[1] = 0;
        }
      }
    }

    cout << answer[0] + 1 << " " << answer[1] + 1 << endl;

    return 0;

  }
  ```
