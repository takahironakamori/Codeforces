### Codeforces Beta Round #34 (Div. 2)

# B. Sale

  [問題はこちら](https://codeforces.com/problemset/problem/34/B)


- 概要<br>
  中古のテレビが n セットある。<br>
  i セット目の価格は a_i であり、マイナスの場合もある。<br>
  Bob は最大 m セット買うことができる。<br>
  Bob が得ることができる最大金額を出力せよ。


- 発想<br>
  価格 a_i が正の場合は、買わない方がいい。<br>
  a を並び替えて、小さい順から順番に 0 と a_i で小さい方を答えに足していく。<br>
  m 回したら終わり。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int answer = 0;
    for (int i = 0; i < m; i++) {
      answer += max(0, 0 - a[i]);
    }

    cout << answer << endl;

  }
  ```
