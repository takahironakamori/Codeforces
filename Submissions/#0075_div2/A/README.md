### Codeforces Beta Round #75 (Div. 2 Only)

# A. Chips

  [問題はこちら](https://codeforces.com/problemset/problem/92/A)
  
- 概要<br>
  円状にセイウチが n 頭並んでいて、1 から n まで番号が付いている。<br>
  1, 2, 3...と順番通りに並んでいて、n の次は 1 になる。<br>
  セイウチは番号の数だけチップスをもらう。<br>
  チップスが番号の数に足らないと受け取らないので、配り終わる。<br>
  m 枚チップスを持っていて、 1 から順番に配る場合余る枚数を出力せよ。
  
- 発想<br>
  残り枚数がセイウチの数より小さくなったらその時点以降、配れない。<br>
  その時点でのチップスの残り枚数を出力する。
  
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    int count = 1;
    while (count <= m) {
      m -= count;
      count++;
      if (n < count) {
        count = 1;
      }
    }

    cout << m << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int m = sc.nextInt();
      sc.close();

      int count = 1;
      while (count <= m) {
        m -= count;
        count++;
        if (n < count) {
          count = 1;
        }
      }

      System.out.println(m);

    }

  }
  ```
    