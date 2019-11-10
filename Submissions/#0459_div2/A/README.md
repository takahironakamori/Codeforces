### Codeforces Round #459 (Div. 2)

# A. Eleven

  [問題はこちら](https://codeforces.com/problemset/problem/918/A)
  
- 概要<br>
  整数 n が与えられる。<br>
  1 から n までの整数で、フィボナッチ数列に含まれる数字の場合は O を、そうでない場合は o をつなげて n 文字の文字列を出力せよ。
  
- 発想<br>
  1 文字目から n 文字目までを o で埋めておいて、<br>
  フィボナッチ数列に含まれる数値の場合は、O に置き換える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<string> answer(n);

    for (int i = 0; i < n; i++) {
      answer[i] = "o";
    }

    int a, b;
    a = 1;
    b = 1;

    int tmp = 0;

    while (b <= n) {
      answer[b - 1] = "O";
      tmp = b;
      b = b + a;
      a = tmp;
    }

    for (int i = 0; i < n; i++) {
      cout << answer[i];
    }

    cout << endl;

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

      String[] answer = new String[n];

      for (int i = 0; i < n; i++) {
        answer[i] = "o";
      }

      int a, b;
      a = 1;
      b = 1;

      int tmp = 0;

      while (b <= n) {
        answer[b - 1] = "O";
        tmp = b;
        b = b + a;
        a = tmp;
      }

      for (int i = 0; i < n; i++) {
        System.out.print(answer[i]);
      }

      System.out.println("");

    }

  }
  ```
    