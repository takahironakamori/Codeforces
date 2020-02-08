### Codeforces Beta Round #9 (Div. 2 Only)

# C. Hexadecimal's Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/9/C)

- 概要<br>
  n が与えられる。<br>
  1 から n までの数値で 2 進数を何個作ることができるか。


- 発想<br>
  文字列にして、1 文字目から順番に以下の判定を行う。<br>
  数値にして、1 以上の場合は、2 の桁数乗を答えに加える。<br>
  数値が 2 以上の場合は、その桁以降の桁の数がどのような数値であっても、2 の桁数乗を答えに加える。<br>
  数値が 1 の場合は、次の桁についても 1 以上の場合は、2 の桁数乗を答えに加え、<br>
  上記同様に数値が 2 以上か否かを判定する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string n;
    cin >> n;

    int answer = 0;
    bool flg = false;
    for (int i = 0; i < n.size(); i++) {
      if (1 <= n[i] - '0' || flg) {
        if (1 < n[i] - '0') {
          flg = true;
        }
        answer += pow(2, n.size() - i - 1);
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
