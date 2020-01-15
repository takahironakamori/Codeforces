### Codeforces Beta Round #5

# B. Center Alignment

  [問題はこちら](https://codeforces.com/problemset/problem/5/B)
  
- 概要<br>
  複数業の文字列が与えられるので、文字列を中央にそろえて周囲を * で囲った物を出力せよ。<br>
  文字列が奇数の場合は、文字列の右側に1個空白を加える場合と文字列の左に1個空白を加える場合を、<br>
  奇数の文字列を表示する度に交互に行う。<br>
  <br>
  例：<br>
  
  ```
  This  is
  
  Codeforces
  Beta
  Round
  5
  ```
  
  ↓<br>
  
  ```
  ************
  * This  is *
  *          *
  *Codeforces*
  *   Beta   *
  *  Round   *
  *     5    *
  ************
  ```
  
- 発想<br>
  文字列を取得するときに文字列の最大文字数を調べておく。<br>
  奇数の文字列については、交互に空白を左右に加える。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<string> s;
    string v = "";
    int mx = 0;

    while (getline(cin, v)) {
      mx = max(mx, (int) v.size());
      s.push_back(v);
    }

    for (int i = 0; i < mx + 2; i++ ){
      cout << "*";
    }

    cout << endl;
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
      v = s[i];
      string v_s = "*";
      string v_e = "*";
      int space = (mx - s[i].size()) / 2;
      for (int j = 0; j < space; j++) {
        v_s += " ";
        v_e = " " + v_e;
      }
      if ((mx - s[i].size()) % 2 != 0) {
        if (count % 2 == 0) {
          v_e = " " + v_e;
        } else {
          v_s += " ";
        }
        count++;
      }
      cout << v_s << v << v_e << endl;

    }

    for (int i = 0; i < mx + 2; i++ ){
      cout << "*";
    }

    cout << endl;

  }
  ```
    