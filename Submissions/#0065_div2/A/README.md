### Codeforces Beta Round #65 (Div. 2)

# A. Way Too Long Words

  [問題はこちら](https://codeforces.com/problemset/problem/71/A)
  
- 概要<br>
  文字列 s_i が n 個与えられる。<br>
  10文字を超える文字列の場合、localization を l10n のように省略形にして出力せよ。<br>
  10文字以下の文字列はそのまま出力せよ。
  
  
- 発想<br>
  10文字を超える場合は、最初の文字 + 文字数- 2 + 最後の文字 を出力する。<br>
  10文字未満の場合は、そのまま出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (10 < s.size()) {
        int c = s.size() - 2;
        cout << s[0] + to_string(c) + s[c+1] << endl;
      } else {
        cout << s << endl;
      }
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

      for (int i = 0; i < n; i++) {
        String s = sc.next();
        if (10 < s.length()) {
          System.out.println(s.substring(0,1) + (s.length() - 1) + s.substring(s.length() - 1));
        } else {
          System.out.println(s);
        }
      }

      sc.close();

    }

  }
  ```
    