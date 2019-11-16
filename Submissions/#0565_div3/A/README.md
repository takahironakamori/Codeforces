### Codeforces Round #565 (Div.3)

# A. Divide it!

  [問題はこちら](https://codeforces.com/problemset/problem/1176/A)
  
- 概要<br>
  整数 n が与えられる。<br>
  この整数に以下のどれかの操作を複数回行う。<br>
  ・ 2 で割り切れる場合は、n を n / 2 にする。<br>
  ・ 3 で割り切れる場合は、n を 2n / 3 にする。<br>
  ・ 5 で割り切れる場合は、n を 4n / 5 にする。<br>
  q 個クエリが与えられるので、n を 1 にできる場合は、操作する最小回数を、<br>
  n を 1 にできない場合は、-1 を出力せよ。
  
  
- 発想<br>
  n を 2 で割り切れなくなるまで割る。その回数を c2 とする。<br>
  2 で割った後の n を 3 で割り切れなくなるまで割る。その回数を c3 とする。<br>
  3 で割った後の n を 5 で割り切れなくなるまで割る。その回数を c5 とする。<br>
  順番はなんでもいい。<br>
  5 で割った場合、4n になるので、2 で 2回割れることになり、すなわち、5 で 1 回割る操作を行うと、<br>
  2 で 2 回割る操作が増え、3回となる。<br>
  3 で割った場合も同様で、2回となる。<br>
  したがって、c2 + c3 * 2 + c5 * 3 が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      long long n;
      cin >> n;

      int c2 = 0;
      int c3 = 0;
      int c5 = 0;

      while (n % 2 == 0) {
        n /= 2;
        c2++;  
      }

      while (n % 3 == 0) {
        n /= 3;
        c3++;  
      }

      while (n % 5 == 0) {
        n /= 5;
        c5++;  
      }

      if (n != 1) {
        cout << -1 << endl;
      } else {
        cout << c2 + c3 * 2 + c5 * 3 << endl;
      }

    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int q = sc.nextInt();

      for (int i = 0; i < q; i++) {

        long n = sc.nextLong();

        int c2 = 0;
        int c3 = 0;
        int c5 = 0;

        while (n % 2 == 0) {
          n /= 2;
          c2++;  
        }

        while (n % 3 == 0) {
          n /= 3;
          c3++;  
        }

        while (n % 5 == 0) {
          n /= 5;
          c5++;  
        }

        if (n != 1) {
          System.out.println(-1);
        } else {
          System.out.println(c2 + c3 * 2 + c5 * 3);
        }

      }

      sc.close();

    }

  }
  ```
    