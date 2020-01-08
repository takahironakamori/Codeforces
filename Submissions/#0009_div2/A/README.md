### Codeforces Beta Round #9 (Div. 2 Only)

# A. Die Roll

  [問題はこちら](https://codeforces.com/problemset/problem/9/A)
  
- 概要<br>
  Yakko, Wakko, Dot の 3 人でサイコロを使ったゲームをする。<br>
  Yakko が降った値は Y、Wakko が降った値は W として与えられる。<br>
  Dot が勝つには、2 人の出した値以上を出す必要がある。<br>
  Dot が勝つ確率を出力せよ。
  
  
- 発想<br>
  Y と W の大きい方を得る。<br>
  （7 - 大きい値）/ 6 が Dot が勝つ確率となる。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int Y, W;
    cin >> Y >> W;

    int count = 7 - max(Y, W);

    if (count == 1) {
      cout << "1/6" << endl;
    } else if (count == 2) {
      cout << "1/3" << endl;
    } else if (count == 3) {
      cout << "1/2" << endl;
    } else if (count == 4) {
      cout << "2/3" << endl;
    } else if (count == 5) {
      cout << "5/6" << endl;
    } else {
      cout << "1/1" << endl;
    }

  }
  ```
    