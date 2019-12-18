### Codeforces Round #594 (Div. 2)

# B. Grow The Tree

  [問題はこちら](https://codeforces.com/problemset/problem/1248/B)
  
- 概要<br>
  n 個の整数で構成される数列がある。<br>
  i 番目の数値は、a_i である。<br>
  座標 (0,0) から開始して、a_i 分 x 軸方向または y 軸方向へ移動させる。<br>
  n 個まで座標を移動させた結果、原点との距離の 2 乗を求めよ。
  
  
- 発想<br>
  x 軸方向か y 軸方向へ移動させるかはそんなに意識しなくていい。<br>
  n 個のうち、半分 x 軸方向へ移動させ、残りの半分を y 軸方向へ移動させて、原点との距離の 2 乗を出力する。<br>
   

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<long long> d(n);
    long long count = 0;

    for (int i = 0; i < n; i++) {
      cin >> d[i];
      count += d[i];
    }

    sort(d.begin(), d.end());

    long long count2 = 0;

    for (int i = 0; i < n / 2; i++) {
      count2 += d[i];
    }

    cout << count2 * count2 + (count - count2) * (count - count2) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      long[] d = new long[n];
      long count = 0;

      for (int i = 0; i < n; i++) {
        d[i] = sc.nextLong();
        count += d[i];
      }

      sc.close();

      Arrays.sort(d);

      long count2 = 0;

      for (int i = 0; i < n / 2; i++) {
        count2 += d[i];
      }

      System.out.println(count2 * count2 + (count - count2) * (count - count2));

    }

  }
  ```
    