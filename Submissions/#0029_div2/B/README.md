### Codeforces Beta Round #29 (Div. 2, Codeforces format)

# B. Traffic Lights

  [問題はこちら](https://codeforces.com/problemset/problem/29/B)


- 概要<br>
  車は A 地点から B 地点までを v m/s で移動する。<br>
  その行動は、X 軸で起こる。<br>
  A から d m 離れた場所に信号機がある。<br>
  0 秒が開始して、最初の g 秒間は青で、次の r 秒間は赤で、再び g 秒間は青、それを繰り返す。<br>
  車は 0 から v まですぐに加速することができて、逆もしかり、v から 0 まですぐに下がる。<br>
  青信号に変わったらすぐに信号機を通りすぎると考える。<br>
  赤信号に変わった瞬間に信号機に到着したら、信号機を通り過ぎることはできない。<br>
  青信号に変わった瞬間に信号機に到着したら、信号機を通り過ぎることができる。<br>
  A 地点には 0 秒のときに出発する。<br>
  交通ルールを破ることなく A 地点から B 地点まで移動するのに必要な最低時間を求めよ。


- 発想<br>
  信号機がない場合の移動時間を計算する(1)。<br>
  信号機に着く時間を計算する。<br>
  信号機に着く時間を小数点以下切り捨てたもの(2)を計算する。<br>
  青信号と赤信号のどの地点なのかを計算する(3)。<br>
  信号機に着く時間の小数点部分のみを計算する(4)。<br>
  (3) が green 以上の場合は、(1) に赤信号の時間から青信号の時間と(3)＋(4)の差を加える。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int distance, trafficlight, speed, green, red;
    cin >> distance >> trafficlight >> speed >> green >> red;

    // 信号機がない場合の移動時間
    double answer = (double) distance / speed;

    // 信号機に着く時間
    double t_ = (double) trafficlight / speed;

    // 信号機に着く時間を小数点以下切り捨てたもの
    int t2_ = floor(t_);

    // 青信号と赤信号のどの地点なのか
    int t3_ = t2_ % (green + red);

    // 信号機に着く時間の小数点部分のみ
    double t4_ = t_ - t2_;

    if (green <= t3_) {
      answer += (double) red - ((t3_ + t4_) - green);
    }

    cout << setprecision(11) << answer << endl;

    return 0;

  }
  ```
