### Codeforces Beta Round #17 (Div 2 Only)

# C. Stripe

  [問題はこちら](https://codeforces.com/problemset/problem/18/C)

- 概要<br>
  n 個の正負の整数が与えられる。<br>
  この数列を 2 つに分けたとき、分けたそれぞれの数列の合計が同じにある分け方は何通りあるか。


- 発想<br>
  n について累積和（sum）を求める。<br>
  sum[n-1] - sum[i] = sum[i] となる回数を数える。<br>
  n 個目では区切れないことに注意する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> sum(n);
    for (int i = 0; i < n; i++) {
      int v_;
      cin >> v_;
      if (i == 0) {
        sum[i] = v_;
      } else {
        sum[i] = v_ + sum[i-1];
      }
    }

    int answer = 0;
    for (int i = 0; i < n - 1; i++) {
      if (sum[n - 1] - sum[i] == sum[i]) {
        answer++;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
