### Codeforces Beta Round #33 (Div. 2, Codeforces format)

# A. What is for dinner?

  [問題はこちら](https://codeforces.com/problemset/problem/33/A)

- 概要<br>
  n, m, k の 3 つの整数が与えられる。<br>
  n は サメの Valerie の歯の合計、m は歯の列の数、k はフナ（鮒）の数。<br>
  また、以下の 2 つの整数が n 個与えられる。<br>
  ・r（歯の列の番号）<br>
  ・c（歯の残っている生存能力）<br>
  Valerie の歯の生存能力と食べることができるフナの数は同じである。<br>
  しかし、1 つの歯で食べた場合、その歯の属する列のすべての歯の生存能力が食べた分だけ減る。<br>
  歯の生存能力をマイナスの値にすることなく、フナを最大何匹食べることができるか。
  
- 発想<br>
  フナの数を超えないように、各歯の列で最も小さい生存能力の歯でフナを食べる。<br>


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    vector<pair<int,int>> rc(n);
    vector<bool> check(m);
    for (int i = 0; i < n; i++) {
      cin >> rc[i].first >> rc[i].second;
    }

    sort(rc.begin(), rc.end());

    int answer = 0;

    for (int i = 0 ; i < n; i++) {
      if (check[rc[i].first] == false) {
        answer += rc[i].second;
        check[rc[i].first] = true;
      }
      if (k <= answer) {
        answer = k;
        break;
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
