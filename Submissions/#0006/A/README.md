### Codeforces Beta Round #6

# A. Triangle

  [問題はこちら](https://codeforces.com/problemset/problem/6/A)
  
- 概要<br>
  4 つの整数が与えられる。<br>
  これらの数値を使って三角形が作ることができる組み合わせがある場合は、TRIANGLE を<br>
  縮退三角形が作ることができる組み合わせがある場合は、SEGMENT を、<br>
  いずれも作ることができない場合は、IMPOSSIBLE を出力せよ。
  
- 発想<br>
  a、b、c の 3 つ数値があった場合、<br>
  a + b > c、a + c > b、b + c > a のすべてを満たす場合は、三角形を作ることができる。<br>
  a + b = c、a + c = b、b + c = a のどれかを満たす場合は、縮退三角形を作ることができる。<br>
  ※縮退三角形とは、3点が一直線上にある三角形。

  
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
    