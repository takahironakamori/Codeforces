### Codeforces Beta Round #39

# A. Find Color

  [問題はこちら](https://codeforces.com/problemset/problem/40/A)

- 概要<br>
  昔の戦闘の結果として、Berlandの名所 - 魔法の時計 - は損害を受けた。。<br>
  大砲の弾が時計にいくつかの穴を開けたが、その修理について住民が心配している。<br>
  魔法の時計は時計の中心を原点とする無限のデカルト平面として考えることができる。<br>
  時計は図に示すように 2 色で描かれている。<br>
  図は時計の中央部分だけを示している。<br>
  このカラーリングは無限に広がる。<br>
  弾は飛行機の点であるとみなすことができる。<br>
  あなたのタスクは弾が当たった場所の色を見つけること。<br>
  線の上にある点は黒とする。


- 発想<br>
  原点からの距離を計算する。<br>
  距離（四捨五入）や x や y のどれかが 0 だったら black。<br>
  そして、<br>
  ・距離（切り上げ）が奇数である<br>
  ・x が > 0 である<br>
  ・y が > 0 である<br>
  のどれか 1 だけ満たす場合は、white となる。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y;
    cin >> x >> y;

    string answer = "white";

    double d = sqrt(x * x + y * y);

    if (x == 0 || y == 0 || d == round(d)) {
      answer = "black";
    } else {
      int d_ = (int) floor(d);
      if (d_ % 2 == 1 ^ x > 0 ^ y > 0) {
        answer = "white";
      } else {
        answer = "black";
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
