### Codeforces Round #582 (Div. 3)

# A. Chips Moving

  [問題はこちら](https://codeforces.com/problemset/problem/1213/A)
  
- 概要<br>
  n 枚のコインがあり、x 座標軸上に並んでいる。<br>
  また、n 枚とは別にいくつかのコインを持っている。<br>
  i 枚目のコインは x_i に置かれている。<br>
  n 枚のコインを移動させて、同じ座標軸上にコインを移動させたい。<br>
  x 座標上に +2、または、-2 移動する場合は、無料。<br>
  x 座標上に +1、または、-1 移動する場合は、コインを 1 枚支払う。<br>
  支払うコインの枚数を最小にして移動させた場合の支払ったコインの枚数を出力せよ。
  
  
- 発想<br>
  コインが置かれている位置が、偶数位置または奇数位置のコインの枚数をそれぞれ集計し、<br>
  少ない方のコインの枚数だけ 1 動かすのが最も支払うコインが少なくなる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> x(n);
    int count = 0;

    for (int i = 0; i < n; i++) {
      cin >> x[i];
      if (x[i] % 2 == 0) {
        count++;
      }
    }

    cout << min(count, n - count) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int[] x = new int[n];
      int count = 0;

      for (int i = 0; i < n; i++) {
        x[i] = sc.nextInt();
        if (x[i] % 2 == 0) {
          count++;
        }
      }

      sc.close();

      System.out.println(Math.min(count, n - count));

    }

  }
  ```
    