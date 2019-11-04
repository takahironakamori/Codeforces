### Codeforces Round #222 (Div. 2)

# A. Playing with Dice

  [問題はこちら](https://codeforces.com/problemset/problem/378/A)
  
- 概要<br>
  2 人でゲームをする。<br>
  1 人目が a を 2 人目が b を指定する。<br>
  1 から 6 までのサイコロを振り、a、b それぞれの差が小さい方が勝ち、同じ場合は引き分け。<br>
  a と b が与えられた場合、1 人目が勝つパターンの数、引き分けの数、2 人目が勝つパターンの数を順に出力せよ。
  
  
- 発想<br>
  サイコロの目が 1 から 6 までの各ケースで a と b の差を比較する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int first = 0;
    int second = 0;
    int draw = 0;

    for (int i = 1; i <= 6; i++) {
      if (abs(a - i) == abs(b - i)) {
        draw++;
      } else if (abs(a - i) < abs(b - i)) {
        first++;
      } else {
        second++;
      }
    }

    cout << first << " " << draw << " " << second << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      sc.close();

      int first = 0;
      int second = 0;
      int draw = 0;

      for (int i = 1; i <= 6; i++) {
        if (Math.abs(a - i) == Math.abs(b - i)) {
          draw++;
        } else if (Math.abs(a - i) < Math.abs(b - i)) {
          first++;
        } else {
          second++;
        }
      }

      System.out.println(first + " " + draw + " " + second);

    }

  }
  ```
    