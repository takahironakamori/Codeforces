### Codeforces Beta Round #10

# A. Power Consumption Calculation

  [問題はこちら](https://codeforces.com/problemset/problem/10/A)
  
- 概要<br>
  パソコンを操作している。操作している最中は 1 分当たり P1 電力を消費する。<br>
  最後の操作をした T1 分後になるとパソコンはスクリーンセーバーが表示され、 1 分当たり P2 電力を消費する。<br>
  スクリーンセーバーが表示されてから、T2 分後になるとスリープモードになり、1 分当たり P3 電力を消費する。<br>
  パソコンを操作している時間が n 個与えられる。i 回目の操作時間は、l_i 分から r_i 分まで使っている。<br>
  l_1 から r_n までの消費電力を求めよ。
  
  
- 発想<br>
  l_i と r_i の組み合わせが 1 つだと、(r_i - l_i) × P1 でいい。<br>
  組み合わせが 2 個以上があると、最後の 1 組以外は r_i の時間に T1 と (l_i+1 - r_i) とで小さい方を加える。<br>
  加えた後、以下の値を答えに加える。<br>
  1.(r_i - l_i) × P1 を計算する。
  2. i が最後の組み合わせじゃない場合は、T2 と (l_i+1 - r_i) の大小関係で分岐する。<br>
  (l_i+1 - r_i) が小さい場合は、T2 × P2 と (l_i+1 - r_i - T2) × P3 を計算する。<br>
  T2 が小さい場合は、T2 と (l_i+1 - r_i) の小さい方 × P2 を計算する。<br>

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<int> l(n);
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
      cin >> l[i] >> r[i];
    }

    for (int i = 0; i < n; i++) {
      if (i != n - 1) {
        r[i] += min(T1, l[i + 1] - r[i]);
      }
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
      answer += (r[i] - l[i]) * P1;
      if (i != n - 1) {
        if (T2 < (l[i + 1] - r[i])) {
          answer += T2 * P2;
          answer += (l[i + 1] - r[i] - T2) * P3;
        } else if (0 < (l[i + 1] - r[i])){
          answer += min(T2, l[i + 1] - r[i]) * P2;
        }
      }
    }

    cout << answer << endl;

  }
  ```
    