### Codeforces Beta Round #17 (Div 2 Only)

# A. Noldbach problem

  [問題はこちら](https://codeforces.com/problemset/problem/17/A)

- 概要<br>
  2 つの整数、n と k が与えられる。<br>
  2 から n までの素数（ P とする）で、以下の条件を満たす素数が k 個以上ある場合は YES、そうでない場合は NO を出力せよ。<br>
  条件：P 以下の隣り合う 2 つの素数の合計に 1 を加えた数が P になること。<br>
  例：n = 27 とすると、19 (= 7 + 11 + 1)や 13 (= 5 + 7 + 1) が条件を満たす P といえる。


- 発想<br>
  2 から n までの素数（ P とする）について以下を確認する。<br>
  2 から P までの素数を配列に入れる。<br>
  その配列の隣り合う 2 つの要素の合計に 1 を加えた数が P になる回数を数える。<br>
  回数が k 以上ならば YES となり、そうでない場合は NO となる。 


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  bool is_prime(int N) {
    for (int i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return N != 1;
  }

  int main() {

    long n, k;
    cin >> n >> k;

    int answer = 0;

    vector<int> p;

    for (int i = 1; i <= n; i++) {
      if (is_prime(i)) {
        p.clear();
        for (int j = 1; j <= i; j++) {
          if (is_prime(j)) {
            p.push_back(j);
          }
        }
        if (1 < p.size()) {
          for (int j = 0; j < p.size() - 1; j++) {
            if (p[j] + p[j + 1] + 1 == i) {
              answer++;
            }
          }
        }
      }
    }

    if (k <= answer) {
      cout << "YES" <<  endl;
    } else {
      cout << "NO" <<  endl;
    }

    return 0;

  }
  ```
