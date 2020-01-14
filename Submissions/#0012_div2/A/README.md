### Codeforces Beta Round #12 (Div 2 Only)

# A. Super Agent

  [問題はこちら](https://codeforces.com/problemset/problem/12/A)
  
- 概要<br>
  3 × 3 マスの文字列の情報が与えられる。<br>
  3 × 3 のマスが Central_symmetry の状態である場合は YES を、<br>
  そうでない場合は NO を出力せよ。
  
  
- 発想<br>
  3 × 3 マスについて、以下の 2 つの文字列を作る。<br>
  ・ 1 行 1 列目 + 1 行 2 列目 + 1 行 3 列目 + 2 行 3 列目 + 3 行 3 列目<br>
  ・ 3 行 3 列目 + 3 行 2 列目 + 3 行 1 列目 + 2 行 1 列目 + 1 行 1 列目<br>
  2 つの文字列が同じであれば YES を、そうでない場合は NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<string> m(3);
    for (int i = 0; i < 3; i++) {
      cin >> m[i];
    }

    vector<char> a = {m[0][0],m[0][1],m[0][2],m[1][2],m[2][2]};
    vector<char> b = {m[2][2],m[2][1],m[2][0],m[1][0],m[0][0]};

    if (a == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
    