### Codeforces Beta Round #76 (Div. 2 Only)

# A. Restoring Password

  [問題はこちら](https://codeforces.com/problemset/problem/94/A)

- 概要<br>
  80 桁の数字と 0 から 9 までを示す 10 桁の数字が与えられる。<br>
  80 桁の数字を 0 から 9 までの数字に置き換えなさい。


- 発想<br>
  map に 10 桁の数字を文字列にしたものとそれを 0 から 9 に置き換えたものをいれる。<br>
  80桁の数字を 10 桁ごとに区切って、map から 0 から 9 に置き換えたものを出力する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    map<string,int> number;
    for (int i = 0; i < 10; i++) {
      string n_;
      cin >> n_;
      number[n_] = i;
    }

    for (int i = 0; i < 8; i++) {
      string s_ = s.substr((10 * i),10);
      cout << number[s_];
    }
    cout << endl;

    return 0;

  }
  ```
