### CROC-MBTU 2012, Elimination Round (ACM-ICPC)

# A. System Administrator

  [問題はこちら](https://codeforces.com/problemset/problem/245/A)
  
- 概要<br>
  サーバー1または2に対して n 回 ping を送信した。<br>
  x_i は成功した回数、y_i は失敗した回数で、失敗した回数が多いとサーバーが止まっている可能性がある。<br>
  n 回の ping 送信の結果を踏まえ、サーバー 1、2 が起動している場合は LIVE を止まっている場合は DEAD を出力せよ。
  
- 発想<br>
  成功した回数 - 失敗した回数を集計して、0以上であれば LIVE 、それ以外は DEAD を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++) {

      int ping;
      cin >> ping;

      int success;
      int lost;

      if (ping == 1) {
        cin >> success;
        cin >> lost;
        a += success - lost;
      } else {
        cin >> success;
        cin >> lost;
        b += success - lost;
      }
    }

    if (0 <= a) {
      cout << "LIVE" << endl;
    } else {
      cout << "DEAD" << endl;
    }

    if (0 <= b) {
      cout << "LIVE" << endl;
    } else {
      cout << "DEAD" << endl;
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

      int a = 0;
      int b = 0;

      for (int i = 0; i < n; i++) {

        int ping = sc.nextInt();

        int success;
        int lost;

        if (ping == 1) {
          success = sc.nextInt();
          lost = sc.nextInt();
          a += success - lost;
        } else {
          success = sc.nextInt();
          lost = sc.nextInt();
          b += success - lost;
        }
      }

      sc.close();

      if (0 <= a) {
        System.out.println("LIVE");
      } else {
        System.out.println("DEAD");
      }

      if (0 <= b) {
        System.out.println("LIVE");
      } else {
        System.out.println("DEAD");
      }

    }

  }
  ```
    