### Codeforces Beta Round #72 (Div. 2)

# A. Toy Army

  [問題はこちら](https://codeforces.com/problemset/problem/84/A)

- 概要<br>
  Valera と Arcady でゲームをする。<br>
  お互い n (偶数) のコマがある。<br>
  自陣のコマは、一斉に敵陣のあるコマを撃つ。<br>
  敵陣の異なるコマを狙うこともできるし、同じコマを狙うこともできる。<br>
  1 度打たれたコマはやられてしまい、以降攻撃できない。<br>
  Valera 側から開始して、Arcady、Valera の順に行い、3 ターンでゲームは終わる。<br>
  3 ターン後のやられたコマの最大値を出力せよ。


- 発想<br>
  1 ターン目の Valera は敵の半分を減らすように撃つ。<br>
  2 ターン目の Arcady も敵の半分を減らすように撃つ。<br>
  3 ターン目の Valera は自陣の残っているコマがそれぞれ別々のコマを撃つ。したがって、敵の残り半分が全員打たれる。<br>
  やられた数は、1/2 n + 1/2 n + 1/2 n となるので、n を 1.5 倍すればいい。<br>
  ただし、型に注意する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long n;
    cin >> n;

    long long answer = n * 1.5;

    cout << answer << endl;

    return 0;

  }
  ```
