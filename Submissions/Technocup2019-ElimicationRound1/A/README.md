### Technocup 2019 - Elimination Round 1

# A. In Search of an Easy Problem

  [問題はこちら](https://codeforces.com/problemset/problem/1030/A)
  
- 概要<br>
  n 人に生徒にコンテストの問題の難易度についてアンケートし、やさしいは、0 難しいは 1 で回答をもらった。<br>
  1 人でも難しいと答えた問題については、HARD、それ以外の場合は EASY と出力せよ。<br>
  
- 発想<br>
  i についてすべて調べて、1 が 1 つでもあったら HARD を出力する。<br>
  それ以外の場合は、EASY を出力する。
  
  
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
    