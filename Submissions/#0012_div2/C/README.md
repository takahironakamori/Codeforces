### Codeforces Beta Round #12 (Div 2 Only)

# C. Fruits

  [問題はこちら](https://codeforces.com/problemset/problem/12/C)

- 概要<br>
  m 個のフルーツを買いたい。<br>
  m 個のフルーツには同じフルーツも含まれる。<br>
  しかし、n 個の値札がばらまかれており、どのフルーツの値段かわからない。<br>
  m 個のフルーツを買った場合の価格の最小値と最大値を出力せよ。

- 発想<br>
  n 個の価格を並び替えしておく。<br>
  m 個のフルーツについて、[フルーツ名,買う個数]の連想配列を作る。<br>
  pair<買う個数,フルーツ名>に変えて、並び替える。<br>
  価格の最小値は、買う個数が多いフルーツから価格の小さいものを適用していく。<br>
  価格の最大値は、買う個数が多いフルーツから価格の大きいものを適用していく。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> price(n);
    for (int i = 0; i < n; i++){
      cin >> price[i];
    }

    sort(price.begin(), price.end());

    map<string,int> mp;
    for (int i = 0; i < m; i++){
      string s_;
      cin >> s_;
      mp[s_]++;
    }

    vector<pair<int,string>> v;
    for (auto item:mp) {
      pair<int,string> p_ = make_pair(item.second, item.first);
      v.push_back(p_);
    }

    sort(v.begin(), v.end());

    int answerMin = 0;
    int answerMax = 0;

    for (int i = 0; i < v.size(); i++) {
      int v_ = v.size() - i - 1;
      answerMin += v[v_].first * price[i];
      answerMax += v[v_].first * price[n - i - 1];
    }

    cout << answerMin << " " << answerMax << endl;

    return 0;

  }
  ```
