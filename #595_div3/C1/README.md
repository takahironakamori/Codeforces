### Codeforces Round #595 (Div. 3)

# C1. Good Numbers (easy version)

  [問題はこちら](https://codeforces.com/contest/1249/problem/C1)
  
- 概要<br>
  3 進数で表すことができる数字を良い番号とする。<br>
  しかし、3^0、3^1...3^a まで それぞれ 1 回しか使わない数字を良い番号とする。<br>
  n 以上で最も小さい 3 進数の数値を求めよ。
  
- 発想<br>
  3 で割った余りが 2 になると3進数での表現はできない。<br>
  3 で割りるだけ割って、最終的な余りが 2 になったら、次の数値へ。<br>
  3 で割り切れるか、最終的な余りが 1 になったらその数値が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      int n;
      cin >> n;

      bool toContinue = true;
      while (toContinue) {

        bool ok = true;
        int current = n;

        while (0 < current) {
          if (ok && current % 3 == 2) {
            ok = false;
          }
          current /= 3;
        }

        if (ok) {
          break;
        }
        n++;

      }

      cout << n << endl;

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

        int n = sc.nextInt();

        boolean toContinue = true;
        while (toContinue) {

          boolean ok = true;
          int current = n;

          while (0 < current) {
            if (ok && current % 3 == 2) {
              ok = false;
            }
            current /= 3;
          }

          if (ok) {
            break;
          }
          n++;

        }

        System.out.println(n);

      }

      sc.close();

    }

  }
  ```
    