### Codeforces Beta Round #74 (Div. 2)

# A. Cableway

  [問題はこちら](https://codeforces.com/problemset/problem/90/A)

- 概要<br>
  ケーブルウェイを使って生徒を山頂へ移動させたい。<br>
  ケーブルウェイは最大 2 名乗ることができ、山頂へは 30 分かかる。<br>
  ケーブルウェイは 3 色に色分けされており、赤、緑、青の順番で色が付いていて、1 分間隔で回っている。<br>
  生徒を上記の 3 色で分けたときに、赤、緑、青それぞれのケーブルウェイに乗りたい生徒の数を r、b、g で与えられる。<br>
  すべての生徒を山頂へ移動させることができる最短の時間を出力せよ。

- 発想<br>
  0 を初期値とする回数を数える変数（count）を用意して、<br>
  r、g、b がすべて 0 以下になるまで、以下のループを繰り返す。<br>
  [ループ]<br>
  count を 3 で割った余りが 0 のときは r を 2 減らす。<br>
  count を 3 で割った余りが 1 のときは g を 2 減らす。<br>
  count を 3 で割った余りが 2 のときは b を 2 減らす。<br>
  count に 1加える。<br>
  ループが終わったら、count に 29 を加えた値が回答となる。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int r, g, b;
    cin >> r >> g >> b;

    int answer = 29;
    int count = 0;

    while (0 < r || 0 < g || 0 < b) {
      int d_ = count % 3;
      if (d_ == 0) {
        if (0 < r) {
          r -= 2;
        }
      } else if (d_ == 1) {
        if (0 < g) {
          g -= 2;
        }
      } else {
        if (0 < b) {
          b -= 2;
        }
      }
      count++;
    }

    cout << answer + count << endl;

    return 0;

  }
  ```
