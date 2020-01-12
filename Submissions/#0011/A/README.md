### Codeforces Beta Round #11

# A. Increasing Sequence

  [問題はこちら](https://codeforces.com/problemset/problem/11/A)
  
- 概要<br>
  n 個の数列が与えられる。i 番目の数値は a_i である。<br>
  また、整数 d が与えられる。<br>
  数列が並び替えることなく昇順の数列になるようにするには、d を何回加えれたらいいか。
  
  
- 発想<br>
  数列について、前の要素と比較して同じであれば 1 回、<br>
  前の要素の方が大きい場合は、前の要素との差 ÷ d + 1 回、<br>
  d を加える必要がある。

  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, d;
    cin >> n >> d;

    vector<int> b(n);

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    int answer = 0;

    for (int i = 1; i < n; i++) {
      if (b[i] <= b[i - 1]) {
        if (b[i] == b[i - 1]) {
          answer++;
          b[i] += d;
        } else {
          int count = (b[i - 1] - b[i]) / d + 1;
          b[i] += count * d;
          answer += count;
        }
      }
    }

    cout << answer << endl;

  }
  ```
    