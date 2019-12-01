### Educational Codeforces Round 38 (Rated for Div. 2)

# A. Word Correction

  [問題はこちら](https://codeforces.com/problemset/problem/938/A)
  
- 概要<br>
  n 文字の文字列が与えられる。<br>
  2 つ母音が続いている場合は、1 文字母音を削除する。<br>
  削除後の文字列を出力せよ。<br>
  なお、母音は a、e、i、o、u、y とする。
   
  
- 発想<br>
  1 文字ずつ母音か否かを判定して、母音の場合は 1 回目だけ出力し、2 回目以降は出力しない。<br>
  子音だったら母音のカウントを 0 にする。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    string answer = "";
    bool flg = true;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ) {
        if(flg) {
          answer += s[i];
          flg = false;
        }
      } else {
        answer += s[i];
        flg = true;
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

      int n = sc.nextInt();
      String S = sc.next();

      sc.close();

      char[] s = S.toCharArray();

      String answer = "";
      boolean flg = true;

      for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ) {
          if(flg) {
            answer += s[i];
            flg = false;
          }
        } else {
          answer += s[i];
          flg = true;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    