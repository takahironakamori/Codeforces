### Codeforces Beta Round #6

# C. Alice, Bob and Chocolate

  [問題はこちら](https://codeforces.com/problemset/problem/6/C)

- 概要<br>
  n 個のチョコレートが直線上に並んでいる。<br>
  左から数えて、i 番目のチョコレートを食べるには、t_i 秒かかる。<br>
  Alice は左から、Bob は右からチョコレートを食べる。<br>
  Alice と Bob が食べることができるチョコレートの数を出力せよ。<br>
  ただし、Alice と Bob が同じタイミングで同じチョコレートを食べようとする場合は、Alice を優先する。

- 発想<br>
  Alice と Bob がすべてのチョコレートを食べ終わる時間を配列で保持する。<br>
  i 番目のチョコレートについて Alice と Bob が食べ終わる時間が早い方が食べることができる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
      cin >> t[i];
    }

    vector<int> alice(n);
    vector<int> bob(n);

    alice[0] = t[0];
    bob[0] = t[n - 1];

    for (int i = 1; i < n; i++) {
      alice[i] = alice[i - 1] + t[i];
      bob[i] = bob[i - 1] + t[n - i - 1];
    }

    int aliceAnswer = 0;
    int bobAnswer = 0;

    for (int i = 0; i < n; i++) {
      if (alice[i] <= bob[n - i - 1]) {
        aliceAnswer++;
      } else {
        bobAnswer++;
      }
    }

    cout << aliceAnswer << " " << bobAnswer << endl;

  }
  ```
