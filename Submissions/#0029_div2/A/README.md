### Codeforces Beta Round #29 (Div. 2, Codeforces format)

# A. Spit Problem

  [問題はこちら](https://codeforces.com/problemset/problem/29/A)
  
  
- 概要<br>
  動物園に n 頭のラクダがいる。<br>
  i 番目のラクダは x_i の位置にて、唾を吐く。唾が飛んだ距離が d_i として与えらえる。<br>
  d_i が正なら右へ、負なら左へ飛ぶ。<br>
  x_i + d_i の位置にラクダがいる場合はラクダに直撃することになる。<br>
  2頭のラクダがお互いの唾が当たるケースがある場合は YES を、<br>
  そうでない場合は、NO を出力せよ。<br>
  
  
- 発想<br>
  vector<pair<ラクダの位置,唾を飛ばした位置>> の配列を用意して、<br>
  ラクダの位置と唾を飛ばした位置が一致する組み合わせがあれば YES を出力する。<br>
  1 組あれば十分。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> camel(n);
    for (int i = 0; i < n; i++) {
      int x, d;
      cin >> x >> d;
      camel[i].first = x;
      camel[i].second = x + d;
    }

    string answer = "NO";

    for (int i = 0; i < n; i++) {
      int count = 0;
      for (int j = i + 1; j < n; j++) {
        if (camel[i].first == camel[j].second && camel[i].second == camel[j].first) {
          count++;
        }
      }
      if (count == 1) {
        answer = "YES";
        break;
      }
    }

    cout << answer << endl;

  }
  ```
    