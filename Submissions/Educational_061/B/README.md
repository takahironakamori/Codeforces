### Educational Codeforces Round 61 (Rated for Div. 2)

# B. Discounts

  [問題はこちら](https://codeforces.com/problemset/problem/1132/B)
  
- 概要<br>
  n 個のチョコレートバーが店に売っている。<br>
  i 個目のチョコレートは、a_i である。<br>
  m 枚のクーポンがあり、1 枚使うことができる。<br>
  i 番目のクーポンは q_i 個のチョコレートを選び、それらの中から高い順に q_i - 1 個分の料金で買うことができる。<br>
  その他のチョコレートは、通常の金額で買うことになる。<br>
  i 番目のクーポンを使ったときの最小の購入金額を出力せよ。
  
  
- 発想<br>
  全てのチョコレートを通常価格で購入した場合の合計金額を計算する。<br>
  合計金額から、チョコレートの高いものから、q_i 番目の金額を引いたものを出力する作業を m 回する。
  
  
- 実装のポイント<br>
  Java の場合は、出力が多いため PrintWriter を使う。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    sort(a.begin(), a.end());

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
      int q;
      cin >> q;
      cout << sum - a[n - q] << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int[] a = new int[n];
      long sum = 0;

      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
        sum += a[i]; 
      }

      Arrays.sort(a);

      int m = sc.nextInt();

      PrintWriter out = new PrintWriter(System.out);

      for (int i = 0; i < m; i++) {
        int q = sc.nextInt();
        out.println(sum - a[n - q]);
      }

      out.flush();

      sc.close();

    }

  }
  ```
    