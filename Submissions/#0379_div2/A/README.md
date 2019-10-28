### Codeforces Round #379 (Div. 2)

# A. Anton and Danik

  [問題はこちら](https://codeforces.com/problemset/problem/734/A)
  
- 概要<br>
  n 回ゲームをした結果として、n 文字の文字列が与えれる。<br>
  Anton が勝ったゲームは、A、Danik が勝ったゲームは D と表示される。<br>
  多く勝った方の名前を出力せよ。引き分けの場合は、Friendship を出力せよ。
  
- 発想<br>
  文字列の中で A と D の数を数える。<br>
  ・ A が多い場合は、Anton を、
  ・ D が多い場合は、Danik を、
  ・ A と D が同数の場合は、Friendship を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string hate = "I hate ";
    string love = "I love ";
    string answer = "";

    for (int i = 0; i < n; i++) {

      if (i % 2 == 0) {
        answer += hate;
      } else {
        answer += love;
      }

      if (i == n - 1) {
        answer += "it";
      } else {
        answer += "that ";
      }

    }

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      String hate = "I hate ";
      String love = "I love ";
      String answer = "";

      for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
          answer += hate;
        } else {
          answer += love;
        }

        if (i == n - 1) {
          answer += "it";
        } else {
          answer += "that ";
        }

      }

      System.out.println(answer);

    }

  }
  ```
    