### Codeforces Round #172 (Div. 2)

# A. Word Capitalization

  [問題はこちら](https://codeforces.com/problemset/problem/281/A)
  
- 概要<br>
  文字列が与えられるので、先頭の文字が大文字じゃない場合は大文字にして出力せよ。<br>
  
- 発想<br>
  ASCIIコードを利用して小文字か否かを判定して、必要があれば、大文字に変換する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int v = (int) s[0];
    if (90 < v) {
      s[0] = char(v - 32);
    }

    cout << s << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int v = (int) s[0];
      if (90 < v) {
        char[] s2 = Character.toChars(v - 32);
        s[0] = s2[0];
      }

      for (int i = 0; i < s.length; i++) {
        System.out.print(s[i]);
      }

      System.out.println("");

    }

  }
  ```
    