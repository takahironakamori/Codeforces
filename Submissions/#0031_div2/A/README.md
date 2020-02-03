### Codeforces Beta Round #31 (Div. 2, Codeforces format)

# A. Worms Evolution

  [問題はこちら](https://codeforces.com/problemset/problem/31/A)


- 概要<br>
  a<sub>1</sub> から a<sub>n</sub> までの n 個の整数が与えられる。<br>
  これらのうち、どれか 3 つを取り出し、a<sub>i</sub> = a<sub>j</sub> + a<sub>k</sub> を満たす、<br>
  i, j, k の組み合わせを 1 組出力せよ。組み合わせがない場合は、-1 を出力せよ。


- 発想<br>
  a<sub>1</sub> から a<sub>n</sub> を (a<sub>i</sub>, i) の pair で配列を作って、並び替える。<br>
  その配列で、上記の足し算を満たす組み合わせがあるか否かを全探索する。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
          if (a[i].first + a[j].first == a[k].first) {
            cout << a[k].second << " " << a[j].second << " " << a[i].second << endl;
            return 0;
          }
        }
      }
    }

    cout << -1 << endl;

    return 0;

  }
  ```
