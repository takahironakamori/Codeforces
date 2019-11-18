### Codeforces Beta Round #40 (Div. 2)

# A. Translation

  [問題はこちら](https://codeforces.com/problemset/problem/41/A)
  
- 概要<br>
  文字列 s と文字列 t がある。<br>
  どちらかを反転させたときに他方と同じ文字列になる場合は、YES をならない場合は NO を出力せよ。
  
  
- 発想<br>
  文字列の長さが違う場合は NO となる。<br>
  1 文字目と 文字列の長さ - 1 文字目を順番に調べる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s, t;
    cin >> s >> t;

    string answer = "YES";

    int l = s.size();
    int m = t.size();

    if (l != m) {
      answer = "NO";
    }

    if (answer == "YES") {
      for (int i = 0; i < l; i++) {
        if (s[i] != t[l - 1 - i]) {
          answer = "NO";
          break;
        }
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
      String S = sc.next();
      String T = sc.next();
      sc.close();

      char[] s = S.toCharArray();
      char[] t = T.toCharArray();

      String answer = "YES";

      int l = S.length();
      int m = T.length();

      if (l != m) {
        answer = "NO";
      }

      if (answer == "YES") {
        for (int i = 0; i < l; i++) {
          if (s[i] != t[l - 1 - i]) {
            answer = "NO";
            break;
          }
        }
      }
      System.out.println(answer);

    }

  }
  ```
    