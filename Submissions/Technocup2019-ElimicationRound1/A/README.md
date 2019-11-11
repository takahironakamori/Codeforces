### Technocup 2019 - Elimination Round 1

# A. In Search of an Easy Problem

  [問題はこちら](https://codeforces.com/contest/1030/problem/A)
  
- 概要<br>
  問題について n 人の意見がある。<br>
  1 人でもはい（ 1 ）と答えている人がいたら HARD と出力し、<br>
  そうでない場合は、EASY を出力よせ。
  
- 発想<br>
  1 があれば HARD を出力し、すべての 0 の場合は EASY を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string answer = "EASY";

    for (int i = 0; i < n; i++) {

      int a;
      cin >> a;

      if (a == 1){
        answer = "HARD";
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

      String answer = "EASY";

      for (int i = 0; i < n; i++) {

        int a = sc.nextInt();

        if (a == 1){
          answer = "HARD";
        }

      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    