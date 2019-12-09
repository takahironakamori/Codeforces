### Codeforces Round #542 (Div. 2)

# A. Be Positive

  [問題はこちら](https://codeforces.com/problemset/problem/1130/A)
  
- 概要<br>
  n 個の数列 a_1, a_2, ... a_n が与えられる。<br>
  数列から数値を抜き出し、以下の条件を満たす数列を作る。<br>
  ・d で割った値がすべて正の数である<br>
  ・数列の個数は、n / 2 以上である<br>
  これらの条件を満たす数列を作ることができる数 d 出力せよ。<br>
  複数ある場合はどれか 1 つ、満たす数列が作れない場合は 0 を出力せよ。

  
- 発想<br>
  正の整数の数、負の整数の数をそれぞれ数える。<br>
  これらの大きい方が n / 2 以上であれば、条件を満たす数列を作ることができる。<br>
  これらの大きい方が n / 2 未満であれば 0 を出力する。<br>
  数列を作ることができる数は、正の整数が多い場合は 1 を出力し、負の整数が多い場合は -1 を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++) {

      int a;
      cin >> a;

      if (0 < a) {
        count1++;
      }

      if (a < 0) {
        count2++;
      }

    }

    if (count2 <= count1) {

      if (ceil((double)n / 2) <= count1) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }

    } else {

      if (ceil((double)n / 2) <= count2) {
        cout << -1 << endl;
      } else {
        cout << 0 << endl;
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
      int n = sc.nextInt();

      int count1 = 0;
      int count2 = 0;

      for (int i = 0; i < n; i++) {

        int a = sc.nextInt();

        if (0 < a) {
          count1++;
        }

        if (a < 0) {
          count2++;
        }

      }

      sc.close();

      if (count2 <= count1) {

        if (Math.ceil((double)n / 2) <= count1) {
          System.out.println(1);
        } else {
          System.out.println(0);
        }

      } else {

        if (Math.ceil((double)n / 2) <= count2) {
          System.out.println(-1);
        } else {
          System.out.println(0);
        }

      }

    }

  }
  ```
    