### Codeforces Beta Round #4(Div.2 Only)

# A. Watermelon

  [問題はこちら](https://codeforces.com/problemset/problem/4/A)

- 概要<br>
  スイカを w キロある。<br>
  そのスイカを 2 で割ったときの答えがそれぞれ偶数になる場合は、YES を<br>
  満たさない場合は、NO を出力せよ。


- 発想<br>
  w を 2 で割ったあまりが 0 で、w が 2 超なら YES 、<br>
  それを満たす場合は NO を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int w;
    cin >> w;

    if (w % 2 == 0 && 2 < w) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
