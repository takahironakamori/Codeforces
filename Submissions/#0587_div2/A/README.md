### Codeforces Round #587 (Div. 3)

# A. Prefixes

  [問題はこちら](https://codeforces.com/problemset/problem/1216/A)
  
- 概要<br>
  a と b で構成される偶数の文字列が与えられる。<br>
  この文字列をどの偶数で区切っても a と b の数が同じになるようにしたい。<br>
  1 文字について、a から b、またその逆を行う作業を 1 回とする。<br>
  最も少ない回数で上記を満たすような文字列を作る場合、何回変更すればいいか。
  
  
- 発想<br>
  2 文字ずつチェックする。<br>
  aa であれば ba に変える。<br>
  bb であれば ab に変える。<br>
  これを繰り返す。
  
  
- 実装のポイント<br>
  Javaだと文字列操作の部分でTLEになるので、注意する。<br>
  C++と同じようなコードだとTLEになる。


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
    int count = 0;

    for (int i = 0; i < n - 1; i += 2) {
      if (s[i] == 'a' && s[i + 1] == 'a') {
        count++;
        answer += "b";
        answer += s[i + 1];
      } else if (s[i] == 'b' && s[i + 1] == 'b') {
        count++;
        answer += "a";
        answer += s[i + 1];
      } else {
        answer += s[i];
        answer += s[i + 1];
      }
    }

    cout << count << endl;
    if (count != 0) {
      cout << answer << endl;
    } else {
      cout << s << endl;
    }
  }
  ```
  
- コード（Java）

  ```cpp
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      String S = sc.next();
      char[] s = S.toCharArray();

      sc.close();

      int count = 0;

      for (int i = 0; i < n - 1; i += 2) {
        if (s[i] == 'a' && s[i + 1] == 'a') {
          count++;
          s[i] = 'b';
        } else if (s[i] == 'b' && s[i + 1] == 'b') {
          count++;
          s[i] = 'a';
        }
      }

      PrintWriter out = new PrintWriter(System.out);
      out.println(count);
      out.println(s);
      out.flush();

    }

  }
  ```
    