### Codeforces Beta Round #12 (Div 2 Only)

# B. Correct Solution?

  [問題はこちら](https://codeforces.com/contest/12/problem/B)

- 概要<br>
  整数 n と m が与えられる。<br>
  n をシャッフルした最小値が m の場合は、OK を<br>
  そうでない場合は、WRONG_ANSWER を出力せよ。<br>
  ただし、最小値で 0 を先頭にすることはできない。<br>
  n が 0 の場合は、最小値は 0 とする。

- 発想<br>
  文字列として n と m を取得する。<br>
  n を 1 文字ずつ配列に入れて並び替える。<br>
  答え用の文字列を空で用意し、<br>
  配列で 0 以外の場所があれば、1 回だけその場所の文字列を入れる。<br>
  あとはすでに入れた文字列以外を順番に答え用の文字列に加える。<br>
  答え用の文字列と m が同じなら OK 。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string n, m;
    cin >> n >> m;

    vector<char> v;
    for (int i = 0; i < n.size(); i++) {
      v.push_back(n[i]);
    }

    sort(v.begin(), v.end());

    string answer = "";
    int p = v.size() + 10;

    for (int i = 0; i < v.size(); i++) {
      if (v[i] != '0') {
        p = i;
        break;
      }
    }

    if (p != v.size() + 10) {
      answer += v[p];
    }

    for (int i = 0; i < v.size(); i++) {
      if (i != p) {
        answer += v[i];
      }
    }

    if (m == answer) {
      cout << "OK" << endl;
    } else {
      cout << "WRONG_ANSWER" << endl;
    }

  }
  ```
