### Codeforces Beta Round #32 (Div. 2, Codeforces format)

# B. Borze

  [問題はこちら](https://codeforces.com/problemset/problem/32/B)
  
- 概要<br>
  文字列が与えられる。<br>
  "." は 0 、"-." は 1 に "--" は 2 に変換して出力せよ。
  
- 発想<br>
  "-" を 1 度取得したか否かを管理する flg をオフで用意する。<br>
  flg を利用して追加する文字列を判定する。<br>
  "." を取得したときに、"-" を 1 度取得している場合は、 1 を文字列に追加する。flgをオフにする。<br>
  "." を取得したときに、"-" を 1 度取得していない場合は、 0 を文字列に追加する。<br>
  "-" を取得したときに、"-" を 1 度取得している場合は、 2 を文字列に追加する。flgをオフにする。<br>
  "-" を取得したときに、"-" を 1 度取得していない場合は、 flg をオンにする。<br>
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    string answer = "";

    bool flg = false;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '.') {
        if (flg == false) {
          answer += "0";
        } else {
          answer += "1";
          flg = false;
        }
      } else if (s[i] == '-') {
        if (flg == false) {
          flg = true;
        } else {
          answer += "2";
          flg = false;
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
      sc.close();

      char[] s = S.toCharArray();

      String answer = "";

      boolean flg = false;

      for (int i = 0; i < s.length; i++) {
        if (s[i] == '.') {
          if (flg == false) {
            answer += "0";
          } else {
            answer += "1";
            flg = false;
          }
        } else if (s[i] == '-') {
          if (flg == false) {
            flg = true;
          } else {
            answer += "2";
            flg = false;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    