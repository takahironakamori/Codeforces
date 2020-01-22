### Codeforces Beta Round #8

# A. Train and Peter

  [問題はこちら](https://codeforces.com/problemset/problem/8/A)

- 概要<br>
  3 種類の文字列 s, a, b が与えられる。<br>
  文字列 s について、文字列から a、b の順で抜き出すことができる場合は、forward、<br>
  文字列から、b、a の順で抜き出すことができる場合は、backward、<br>
  ※これは、文字列を反転させ、a、b の順で抜き出すことができることを言う。
  文字列から、a、b の順、b、a の順の両方で抜き出すことができる場合は、both、<br>
  文字列から、a、b の順、b、a の順の両方とも抜き出すことができない場合は、fantasy、<br>
  を出力せよ。

- 発想<br>
  文字列から a、b の順で抜き出すことができれば、forward 確定。<br>
  反転した文字列から、a、b の順で抜き出すことができれば、backward 確定。<br>
  forward、backward 両方が確定している場合は、both、<br>
  両方が確定しない場合は、fantasy を出力する。

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s, a, b;
    cin >> s >> a >> b;

    int ba = false;
    int ab = false;

    int a1 = s.find(a);
    string s1 = s.substr(a1 + a.size(), s.size() - a.size() + 1);
    int b1 = s1.find(b);

    if (0 <= a1 && 0 <= b1) {
      ab = true;
    }

    //cout << s1 << " " << b1 << endl;

    reverse(s.begin(), s.end());

    int a2 = s.find(a);
    string s2 = s.substr(a2 + a.size(), s.size() - a.size() + 1);
    int b2 = s2.find(b);

    if (0 <= a2 && 0 <= b2) {
      ba = true;
    }

    if (ab && ba) {
      cout << "both" << endl;
    } else if (ab) {
      cout << "forward" << endl;
    } else if (ba) {
      cout << "backward" << endl;
    } else {
      cout << "fantasy" << endl;
    }

  }
  ```
