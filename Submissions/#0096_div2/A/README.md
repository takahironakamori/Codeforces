### Codeforces Beta Round #96 (Div. 2 Only)

# A. HQ9+

  [問題はこちら](https://codeforces.com/problemset/problem/133/A)
  
- 概要<br>
  HQ9+ というプログラムには以下のような特徴がある。<br>
  ・H は"Hello, World!"を出力する。H は大文字に限る。<br>
  ・Q はプログラム自体を出力する。Q は大文字に限る。<br>
  ・9 は"99 Bottles of Beer"の歌詞を出力する。<br>
  ・+ は値を増やす。<br>
  他の文字は無視する。<br>
  HQ9+ で書かれたプログラムが与えられるので、何かしたら出力される場合は YES を、そうでない場合は NO を出力せよ。
  
  
- 発想<br>
  文字列の中に H か Q か 9 が 1 文字でも含まれていたら YES を、それ以外は NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    string answer = "NO";

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
        answer = "YES";
        break;
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

      String answer = "NO";

      for (int i = 0; i < s.length; i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
          answer = "YES";
          break;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    