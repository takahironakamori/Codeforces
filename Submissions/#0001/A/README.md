### Codeforces Beta Round #1

# A. Theatre Square

  [問題はこちら](https://codeforces.com/problemset/problem/1/A)
  
  
- 概要<br>
  n × m の敷地を、a × a の敷石ですべて覆いたい。<br>
  a × a の敷石は最低何枚必要か。
  
  
- 発想<br>
  n / a で切り上げた値と m / a で切り上げた値をかければいい。<br>
  大きい数値になるので型に注意する。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, a;
    cin >> n >> m >> a;

    long long answer = (long long) ceil((double) n / a) * ceil((double) m / a);

    cout << answer << endl;

  }
  ```
    