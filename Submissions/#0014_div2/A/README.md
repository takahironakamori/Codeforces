### Codeforces Beta Round #14 (Div 2 Only)

# A. Letter

  [問題はこちら](https://codeforces.com/problemset/problem/14/A)

- 概要<br>
  n × m のマスの紙がある。<br>
  それぞれのマスには . か * が書かれている。<br>
  すべての * を含んだ状態で紙を切った場合の各マスの状態を出力せよ。


- 発想<br>
  n × m マスについて、* がある一番上のマス、最も下のマス、最も右のマス、最も左のマスが<br>
  どこかを調べて、* がある一番上のマスから最も下のマスまで、<br>
  最も右のマスから最も左のマスまでを出力する。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    // [top, right, bottom, left]
    vector<int> size = {n, m, 0, 0};

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
      for (int j = 0; j < m; j++) {
        if (s[i][j] == '*') {
          size[0] = min(size[0], i);
          size[1] = min(size[1], j);
          size[2] = max(size[2], i);
          size[3] = max(size[3], j);
        }
      }
    }

    for (int i = size[0]; i <= size[2]; i++) {
      for (int j = size[1]; j <= size[3]; j++) {
        cout << s[i][j];
      }
      cout << endl;
    }

  }
  ```
