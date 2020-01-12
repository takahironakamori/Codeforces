### Codeforces Beta Round #22 (Div. 2 Only)

# A. Second Order Statistics

  [問題はこちら](https://codeforces.com/problemset/problem/22/A)
  
  
- 概要<br>
  n 個の数値がある数列が与えられる。<br>
  この数列を同じ数値は 1 つだけにし、小さい順に並び替えた数列を作りたい。<br>
  できた数列の 2 番目に小さい数値を出力せよ。<br>
  出力できない場合は NO を出力する。
  
  
- 発想<br>
  入力を set に入れて、2 番目の要素を出力する。<br>
  set の要素数が 1 以下の場合は NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int N;
    cin >> N;

    set<int> st;

    for (int i = 0; i < N; i++) {
      int n;
      cin >> n;
      st.insert(n);
    }

    int current = 0;

    if (1 < st.size()) {
      for(auto x : st) {
        if (current == 1) {
          cout << x << endl;
        }
        current++;
      }
    } else {
      cout << "NO" << endl;
    }

  }
  ```
    