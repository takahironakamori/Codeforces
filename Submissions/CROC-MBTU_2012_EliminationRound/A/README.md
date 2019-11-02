### CROC-MBTU 2012, Elimination Round (ACM-ICPC)

# A. System Administrator

  [問題はこちら](https://codeforces.com/problemset/problem/245/A)
  
- 概要<br>
  文字列 s が与えられる。<br>
  文字列 s の文字を削除し、a の数が過半数になるような文字列にしたい。<br>
  削除後（削除しないかもしれない）の文字数を出力せよ。
  
- 発想<br>
  s の中で a の個数を数える。<br>
  a * 2 - 1 と s の文字数を比較して少ない方を出力する。
  
  
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
    