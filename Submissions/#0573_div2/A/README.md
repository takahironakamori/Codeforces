### Codeforces Round #573 (Div. 2)

# A. Tokitsukaze and Enhancement

  [問題はこちら](https://codeforces.com/problemset/problem/1191/A)
  
- 概要<br>
  艦隊コレクションというゲームがある。<br>
  HP によってカテゴリーが分かれる。<br>
  ・カテゴリー A：HP が 4n+1 のとき<br>
  ・カテゴリー B：HP が 4n+3 のとき<br>
  ・カテゴリー C：HP が 4n+2 のとき<br>
  ・カテゴリー D：HP が 4n のとき<br>
  カテゴリー A が良くて、カテゴリー Dは良くない。<br>
  また、HP は 最大 2 まで HP を増加させることができる。 <br>
  HP が n と与えられたとき最もいいカテゴリーにする場合に、<br>
  どれだけHPを増やして、最終的にどのカテゴリーになるか。

  
- 発想<br>
  n について、4 を割ったあまりに応じて結果を表示する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n % 4 == 1) {
      cout << "0 A" << endl;
    } else if (n % 4 == 3) {
      cout << "2 A" << endl;
    } else if (n % 4 == 2) {
      cout << "1 B" << endl;
    } else {
      cout << "1 A" << endl;
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

      if (n % 4 == 1) {
        System.out.println("0 A");
      } else if (n % 4 == 3) {
        System.out.println("2 A");
      } else if (n % 4 == 2) {
        System.out.println("1 B");
      } else {
        System.out.println("1 A");
      }

      sc.close();

    }

  }
  ```
    