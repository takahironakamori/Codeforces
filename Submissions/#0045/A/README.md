### School Personal Contest #3 (Winter Computer School 2010/11) - Codeforces Beta Round #45 (ACM-ICPC Rules)

# A. Rock-paper-scissors

  [問題はこちら](https://codeforces.com/problemset/problem/48/A)
  
- 概要<br>
  Fyodor、Matcoskin、Sharic の 3 人でじゃんけんをする。<br>
  Fyodor が出した手、Matcoskin が出した手、Sharicが出した手がそれぞれ与えられる。<br>
  じゃんけんの勝者の名前の頭文字を大文字で出力せよ。<br>
  なお、勝者は 1 人だけ勝った場合のみ決まる。<br>
  それ以外の場合は、? を出力せよ。
  
  
- 発想<br>
  勝者が 1 人なので、勝つパターンはそれぞれ 3 パターンなので愚直に if 文を書く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string F, M, S;
    cin >> F >> M >> S;

    string answer = "?";

    if (F == "paper" && M == "rock" && S == "rock") {
      answer = "F";
    }
    if (F == "rock" && M == "scissors" && S == "scissors") {
      answer = "F";
    }
    if (F == "scissors" && M == "paper" && S == "paper") {
      answer = "F";
    }

    if (M == "paper" && F == "rock" && S == "rock") {
      answer = "M";
    }
    if (M == "rock" && F == "scissors" && S == "scissors") {
      answer = "M";
    }
    if (M == "scissors" && F == "paper" && S == "paper") {
      answer = "M";
    }

    if (S == "paper" && M == "rock" && F == "rock") {
      answer = "S";
    }
    if (S == "rock" && M == "scissors" && F == "scissors") {
      answer = "S";
    }
    if (S == "scissors" && M == "paper" && F == "paper") {
      answer = "S";
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
      String F = sc.next();
      String M = sc.next();
      String S = sc.next();
      sc.close();

      String answer = "?";

      if (F.equals("paper") && M.equals("rock") && S.equals("rock")) {
        answer = "F";
      }
      if (F.equals("rock") && M.equals("scissors") && S.equals("scissors")) {
        answer = "F";
      }
      if (F.equals("scissors") && M.equals("paper") && S.equals("paper")) {
        answer = "F";
      }

      if (M.equals("paper") && F.equals("rock") && S.equals("rock")) {
        answer = "M";
      }
      if (M.equals("rock") && F.equals("scissors") && S.equals("scissors")) {
        answer = "M";
      }
      if (M.equals("scissors") && F.equals("paper") && S.equals("paper")) {
        answer = "M";
      }

      if (S.equals("paper") && M.equals("rock") && F.equals("rock")) {
        answer = "S";
      }
      if (S.equals("rock") && M.equals("scissors") && F.equals("scissors")) {
        answer = "S";
      }
      if (S.equals("scissors") && M.equals("paper") && F.equals("paper")) {
        answer = "S";
      }

      System.out.println(answer);

    }

  }
  ```
    