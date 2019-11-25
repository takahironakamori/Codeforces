### Codeforces Round #386 (Div. 2)

# B. Decoding

  [問題はこちら](https://codeforces.com/problemset/problem/746/B)
  
- 概要<br>
  n 文字の文字列がある。<br>
  文字列は、中央の文字列（偶数の場合は切り上げ）を抜き出す。<br>
  抜き出した文字列は、別の文字列（最初は空）の右に加える。<br>
  この作業を n 回繰り返した結果が与えられるので、処理前の文字列を出力せよ。
  
- 発想<br>
  処理後の文字列の右から順番に別の文字列（最初は空）の中央（偶数の場合は切り上げ）に挿入していく。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    string answer = s.substr(n - 1, 1);

    for (int i = 2; i <= n; i++) {
      string s_ = s.substr(s.size() - i, 1);
      answer.insert(answer.size() / 2, s_);
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
      String s = sc.next();
      sc.close();

      StringBuilder answer = new StringBuilder(s.substring(n - 1));

      for (int i = 2; i <= n; i++) {
        String s_ = s.substring(n - i, n - i + 1);
        answer.insert(answer.length() / 2, s_);
      }

      System.out.println(answer.toString());

    }

  }
  ```
    