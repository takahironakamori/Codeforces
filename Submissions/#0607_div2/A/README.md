### Codeforces Round #607 (Div. 2)

# A. Suffix Three

  [問題はこちら](https://codeforces.com/problemset/problem/1281/A)
  
- 概要<br>
  接尾辞がついた文字列が与えられる。<br>
  接尾辞が po なら FILIPINO、<br>
  接尾辞が desu なら JAPANESE、
  接尾辞が mnida なら KOREAN を出力せよ。
  
  
- 発想<br>
  最後の 2 文字を抜き出し、分岐させる。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    while (0 < t) {

      string s;
      cin >> s;

      string s2 = s.substr(s.size() - 2);

      if (s2 == "po") {
        cout << "FILIPINO" << endl;
      } else if (s2 == "su"){
        cout << "JAPANESE" << endl;
      } else if (s2 == "da"){
        cout << "KOREAN" << endl;
      }

      t--;

    }

  }
  ```

    