### School Team Contest #1 (Winter Computer School 2010/11)

# B. Company Income Growth

  [問題はこちら](https://codeforces.com/problemset/problem/39/B)

- 概要<br>

  2001 年から 2001 + n 年までの企業の収入が与えられる。<br>
  2001 + i 年の収入は a<sub>i</sub> billion である。<br>
  Petya はこれらの情報から 収入が 1、2、3 ... と 1 billion ずつ増加しているような年を抜き出したい。
  年を何個抜き出すことができるか。<br>
  抜き出した年も合わせて出力せよ。


- 発想<br>

  2001 年から 2001 + n 年まで順番に 1 を探し、<br>
  見つかれば次以降は 2 を探し、<br>
  見つかれば次以降は 3 を探すと<br>
  n まで順番に探していく。<br>
  該当する場合は、年を set 等に入れていく。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    set<int> year;
    int current = 1;
    for (int i = 0; i < n; i++) {
      int a_;
      cin >> a_;
      if (a_ == current) {
        year.insert(2000 + i + 1);
        current++;
      }
    }

    cout << year.size() << endl;

    for(auto item:year) {
      cout << item << " ";
    }

    if(year.size() != 0) {
      cout << endl;
    }

    return 0;

  }
  ```
