### School Team Contest #1 (Winter Computer School 2010/11)

# H. Multiplication Table

  [問題はこちら](https://codeforces.com/problemset/problem/39/H)

- 概要<br>

  基数 k が与えられるので、1 から (k - 1) まで乗算した値を k 進数で表した表（1 × 1 から (k - 1) × (k - 1)まで）を作れ。<br>


- 発想<br>

  i を 1 から k まで掛けた値を k 進数に置き換えて表示する。<br>
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  string f(int v, int n){
    long long ans = 0;
    for (int i = 0; 0 < v ; i++)
    {
      ans = ans + (v % n) * pow(10, i);
      v = v / n;
    }
    return to_string(ans);
  }

  int main() {

    int k;
    cin >> k;

    for (int i = 1; i < k; i++) {
      for (int j = 1; j < k; j++) {
        cout << f(i * j, k) << " ";
      }
      cout << endl;
    }

    return 0;

  }
  ```
