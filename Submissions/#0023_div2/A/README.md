### Codeforces Beta Round #23 (Div. 2 Only)

# A. You're Given a String...

  [問題はこちら](https://codeforces.com/contest/23/problem/A)


- 概要<br>
  文字列（100文字以下）が与えられる。<br>
  文字列の部分文字列を作成したとき、その部分文字列を 2 回以上作ることができる場合の部分文字列の最長の長さを求めよ。


- 発想<br>
  文字列について、部分文字列を作成して、Setに入れる。<br>
  Setの大きさが、文字列の長さ - 部分文字列の長さ + 1　じゃない場合は、<br>
  ある部分文字列が 2 回以上作れていることになるので、そのときの部分文字列の長さを出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    for (int i = s.size(); 0 < i; i--){
      set<string> answer;
      for (int j = 0; j + i <= s.size(); j++){
        answer.insert(s.substr(j,i));
      }
      if (answer.size() != s.size() - i + 1) {
          cout << i << endl;
          return 0;
        }
    }

    cout << 0 << endl;

    return 0;

  }
  ```
