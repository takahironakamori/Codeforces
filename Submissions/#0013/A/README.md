### Codeforces Beta Round #13

# A. Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/13/A)

- 概要<br>
  A が与えられるので、A を 2 から A - 1 進数で表したときの各桁の合計の平均を求めなさい。


- 発想<br>
  A を 2 から A - 1 進数で表したときの各桁の合計を計算して分子にする。<br>
  分母は A - 2 にする。<br>
  分子と分母の最大公約数を求め、分子 / 最大公約約数を分子とし、<br>
  分母 / 最大公約数を分母とすると、約分された状態になる。<br>
  約分できない分数のときは、最大公約数が 1 になるので、常に最大公約数で割ればいい。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  // v を c 進数に変換して、各桁の合計を計算する
  int digits(int v, int c) {
    int res = 0;
    while (0 < v){
      res += v % c;
      v = v / c;
    }
    return res;
  }

  // 最大公約数
  int gcd(int a, int b) {
    if (b == 0) {
      return a;
    }
    return gcd(b, a % b);
  }

  int main() {

    int A;
    cin >> A;

    int sum_ = 0;
    for (int i = 2; i < A; i++) {
      sum_ += digits(A, i);
    }

    int gcd_ = gcd(sum_, A - 2);

    cout << sum_ / gcd_  << "/" << (A - 2) / gcd_ << endl;

  }
  ```
