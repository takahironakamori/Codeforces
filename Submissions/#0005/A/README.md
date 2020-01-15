### Codeforces Beta Round #5

# A. Chat Server's Outgoing Traffic

  [問題はこちら](https://codeforces.com/problemset/problem/5/A)
  
  
- 概要<br>
  最大 100 個のチャットのコマンドが文字列として与えられる。<br>
  1 文字目が + の場合は、のちに続くユーザー名のユーザーが参加したことを示し、<br>
  1 文字目が - の場合は、のちに続くユーザー名のユーザーが退出したことを示す。<br>
  「ユーザー名:内容」の場合は、ユーザーがメッセージを送信したことを示す。<br>
  コマンドはこの 3 種類しかなく、メッセージは送信時に参加しているユーザー全員に送信される。<br>
  このチャットの送信データ量を計算したい。送信データはメッセージを送信したときの内容の文字列×参加者数となる。<br>
  与えられたコマンドをすべて実行したときの送信データ量の合計を出力せよ。
  
  
- 発想<br>
  文字列の 1 文字目が、+ か - の場合はユーザー数を増減させる。<br>
  それ以外の場合は、文字列を : で区切り、送信データ量を計算する。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  vector<string> StringSplit(const string &str, char sep) {
    vector<string> v;
    stringstream ss(str);
    string buffer;
    while (getline(ss, buffer, sep)) {
      v.push_back(buffer);
    }
    return v;
  }

  int main() {

    string v = "";

    int count = 0;
    int answer = 0;

    while (getline(cin, v)) {
      if (v[0] == '-'){
        count--;
      }
      if (v[0] == '+'){
        count++;
      }
      vector<string> v_ = StringSplit(v,':');
      if (1 < v_.size()) {
        answer += v_[1].size() * count;
      }
    }

    cout << answer << endl;

  }
  ```
    