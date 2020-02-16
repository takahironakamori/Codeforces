### Codeforces Beta Round #42 (Div. 2)

# B. Letter

  [問題はこちら](https://codeforces.com/contest/43/problem/B)

- 概要<br>
  Vasya は新聞の見出しから文字を切って匿名の手紙を書くことを決めた。<br>
  彼は見出しと（手紙の）本文を知っている。<br>
  Vasya は見出しの文字 1 文字につき、1 回だけ使うことができる。<br>
  Vasya は見出しのスペースを切らない。これらを残すために、いくつかの空白を残す。<br>
  彼が作りたいテキストができるかどうかを調べろ。


- 発想<br>
  見出しの文字（s<sub>1</sub>）を大文字と小文字に分けて A 〜 Z、a 〜 z まで何回使われているのかを管理する。<br>
  s<sub>2</sub>で使われている文字が使用回数だけ使われているかを確認する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<int> V1(26);
    vector<int> v1(26);

    for (int i = 0; i < s1.size(); i++) {
      if (s1[i] == ' ') {
        continue;
      }
      int n_ = (int) s1[i] - 0;
      if (64 < n_ && n_ < 91) {
        V1[(int) s1[i] - 'A']++;
      } else {
        v1[(int) s1[i] - 'a']++;
      }
    }

    bool answer = true;

    for (int i = 0; i < s2.size(); i++) {
      if (s2[i] == ' ') {
        continue;
      }
      int n_ = (int) s2[i] - 0;
      if (64 < n_ && n_ < 91) {
        if (V1[(int) s2[i] - 'A'] == 0){
          answer = false;
          break;
        } else {
          V1[(int) s2[i] - 'A']--;
        }
      } else {
        if (v1[(int) s2[i] - 'a'] == 0){
          answer = false;
          break;
        } else {
          v1[(int) s2[i] - 'a']--;
        }
      }
    }

    if (answer) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    return 0;

  }
  ```
