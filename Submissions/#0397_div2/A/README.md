### Codeforces Round #397 by Kaspersky Lab and Barcelona Bootcamp (Div. 1 + Div. 2 combined)

# A. Neverending competitions

  [問題はこちら](https://codeforces.com/problemset/problem/765/A)
  
- 概要<br>
  n 枚の航空チケットのレシート（順番は任意）と Jinotega の自宅がある町の空港名（アルファベット大文字3文字）が与えられる。<br>
  ・Jinotega はコンテストに出場するためだけに飛行機を使う。<br>
  ・コンテストが 1 回開催されたら必ず自宅に戻る。<br>
  ・最初は自宅にいるとする。<br>
  n 枚のレシートの状況から自宅にいると考えられる場合は home を、<br>
  コンテストに出場していると考えられる場合は contest を出力せよ。
  
  
- 発想<br>
  文字列の最初の 3 文字が 自宅の空港と同じ文字列だったら、カウントを 1 加える。<br>
  文字列の最後の 3 文字が 自宅の空港と同じ文字列だったら、カウントを 1 減らす。<br>
  カウントが 0 だったら自宅にいると考えられ、それ以外の場合は、コンテストに出場していると考えられる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string home;
    cin >> home;

    int count = 0;  

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (s.substr(0,3) == home) {
        count++;
      }
      if (s.substr(5,3) == home) {
        count--;
      }
    }

    if (count == 0) {
      cout << "home" << endl;
    } else {
      cout << "contest" << endl;
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
      String home = sc.next();

      int count = 0;  

      for (int i = 0; i < n; i++) {
        String s = sc.next();
        if (s.substring(0,3).equals(home)) {
          count++;
        }
        if (s.substring(5).equals(home)) {
          count--;
        }
      }

      sc.close();

      if (count == 0) {
        System.out.println("home");
      } else {
        System.out.println("contest");
      }

    }

  }
  ```
    