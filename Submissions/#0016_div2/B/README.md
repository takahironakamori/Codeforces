### Codeforces Beta Round #16 (Div 2 Only)

# B. Burglar and Matches

  [問題はこちら](https://codeforces.com/problemset/problem/16/B)
  
- 概要<br>
  倉庫に m 個のコンテナがあり、i 番目のコンテナには、マッチ箱が a_i 個入っている。<br>
  また、a_i のマッチ箱はすべて b_i 本のマッチが入っている。<br>
  最大、n 個のマッチ箱を持つことができる場合、最大何本のマッチ本を手に入れることができるか。
  
  
- 発想<br>
  マッチ棒の数が多いマッチ箱から順番に n 個選択する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    vector<int> b(m);
    vector<pair<int, int>> count(m);

    for (int i = 0; i < m; i++) {
      cin >> a[i] >> b[i];
      count[i].first = b[i];
      count[i].second = i;
    }

    sort(count.begin(), count.end());

    long long answer = 0;
    int current = n;

    for (int i = m - 1; 0 <= i; i--) {
      int c_ = count[i].second;
      answer += min(a[c_] * b[c_], current * b[c_]);
      current = max(0, current - a[c_]);
      if (current == 0) {
        break;
      }
    }

    cout << answer << endl;

  }
  ```
    