### Codeforces Round #589 (Div. 2)

# A - Distinct Digits

  [問題はこちら](https://codeforces.com/contest/1228/problem/A)
  
- 概要<br>
  l と r の 2 つの整数が与えられる。<br>
  以下の条件を満たす整数 X を見つけなさい。<br>
  ・ l ≦ x ≦ r <br>
  ・全ての数字が異なる
  
- 発想<br>
  l から r まで、同じ数字を使っていないかどうかを調べる。
  
- 実装のポイント<br>
  文字(Char型)を数字にするには、「- '0'」をつける。<br>
  for 文が多いが、数字の上限は 100000 なので、愚直に調べても間に合う。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int l, r;
    cin >> l >> r;

    int answer = -1;

    for (int i = l; i <= r; i++) {

      string s = to_string(i);
      vector<int> v(10);

      for (int j = 0; j < s.size(); j++) {
        v[(s.at(j) - '0')]++;
      }

      int c = 0;

      for (int j = 0; j < 10; j++) {
        if(1 < v[j]){
          c = 1;
          break;
        }
      }

      if (c == 0) {
        answer = i;
        break;
      }

    }

    cout << answer << endl;

    return 0;

  }
  ```
    