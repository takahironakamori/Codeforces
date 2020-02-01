### Codeforces Beta Round #70 (Div. 2)

# A. Haiku

  [問題はこちら](https://codeforces.com/problemset/problem/78/A)

- 概要<br>
  3 行の文字列が与えられる。<br>
  以下の条件をすべて満たす場合は、YES を満たさない場合は NO を出力せよ。<br>
  ・1 行目の文字列に、母音 (a,i,u,e,o) が 5 個含まれている。
  ・2 行目の文字列に、母音 (a,i,u,e,o) が 7 個含まれている。
  ・3 行目の文字列に、母音 (a,i,u,e,o) が 5 個含まれている。


- 発想<br>
  文字列を取得して、1 行目、2 行目、3 行目の母音の数を数えて、<br>
  条件を満たすか否かを確認する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    vector<string> s;
    string v = "";

    while (getline(cin, v)) {
      s.push_back(v);
    }

    vector<int> count(3);
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < s[i].size(); j++) {
        char s_ = s[i][j];
        if (s_ == 'a' || s_ == 'i' || s_ == 'u' || s_ == 'e' || s_ == 'o') {
          count[i]++;
        }
      }
    }

    string answer = "NO";

    if (count[0] == 5 && count[1] == 7 && count[2] == 5){
      answer = "YES";
    }

    cout << answer << endl;

    return 0;

  }
  ```
