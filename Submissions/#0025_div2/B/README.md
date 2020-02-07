### Codeforces Beta Round #25 (Div. 2 Only)

# B. Phone numbers

  [問題はこちら](https://codeforces.com/problemset/problem/25/B)


- 概要<br>
  n 桁の電話番号が与えられる。<br>
  この電話番号を 2 または 3 桁を - で区切って出力せよ。<br>
  複数パターンある場合は、どれか 1 パターンを出力せよ。


- 発想<br>
  n が偶数だったら、全部 2 桁を - で区切ればいい。<br>
  3 が奇数だったら、最初を 1 度だけ 3 桁で区切って、残りをすべて 2 桁で区切ればいい。 


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    string answer = "";

    int count = 0;

    if (n % 2 == 1) {
      count = 3;
      answer = s.substr(0,3);
    } else {
      count = 2;
      answer = s.substr(0,2);
    }

    while (count < n) {
      answer += "-";
      answer += s.substr(count, 2);
      count += 2;
    }

    cout << answer << endl;

    return 0;

  }
  ```
