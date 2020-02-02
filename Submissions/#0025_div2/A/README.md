### Codeforces Beta Round #25 (Div. 2 Only)

# A. IQ test

  [問題はこちら](https://codeforces.com/problemset/problem/25/A)


- 概要<br>
  n 個の正の整数が与えらえれる。<br>
  n 個の整数のうち、偶奇が異なるものが 1 個だけあるので、その値が何番目にあるかを出力せよ。


- 発想<br>
  n 個の整数の偶奇で配列に分ける。<br>
  偶奇の配列には、位置を入れる。<br>
  偶奇の配列のうち、size が 1 の方の配列に入っている位置を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; i++){
      int a_;
      cin >> a_;
      if (a_ % 2 == 0){
        even.push_back(i + 1);
      } else {
        odd.push_back(i + 1);
      }
    }

    if (odd.size() == 1) {
      cout << odd[0] << endl;
    } else {
      cout << even[0] << endl;
    }

    return 0;

  }
  ```
