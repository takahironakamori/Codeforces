### Codeforces Beta Round #4(Div.2 Only)

# C. Registration system

  [問題はこちら](https://codeforces.com/problemset/problem/4/C)

- 概要<br>
  n 個の文字列が与えられる。<br>
  これらの文字列をデータベースに登録したい。<br>
  しかしデータベースには、1度登録した文字列を登録することはできない。<br>
  登録できた場合は OK を出力し、登録できない場合は その文字列 + その文字列で登録できなかった回数を出力せよ。

  
- 発想<br>
  文字列をキーとした map を作って、map[文字列]で回数を数えていく。<br>
  回数が 1 の場合は、OK を、2 以上の場合は、値 - 1 を文字列につないで出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
      string s_;
      cin >> s_;
      mp[s_]++;
      if (mp[s_] == 1) {
        cout << "OK" << endl;
      } else {
        int i_ = mp[s_] - 1;
        cout << s_ + to_string(i_) << endl;
      }
    }

  }
  ```
