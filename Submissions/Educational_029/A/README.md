### Educational Codeforces Round 29

# A. Quasi-palindrome

  [問題はこちら](https://codeforces.com/problemset/problem/863/A)
  
- 概要<br>
  文字列 x が回文の文字列がどうかを判定せよ。<br>
  ただし、文字列の頭に 0 を何個つけてもいい。
  
  
- 発想<br>
  文字列の末尾から0が続く分だけ削除して、削除した文字列が回文になっているかを確認する。<br>
  0 をすべて消して回文になっているかを判定してもいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string x;
    cin >> x;

    int count = 0;
    for (int i = x.size() - 1; 0 <= i; i--) {
      if (x[i] == '0') {
        count++;
      } else {
        break;
      }
    }

    string x2 = x.substr(0, x.size() - count);

    string x3 = x2;
    reverse(x3.begin(),x3.end());

    if (x2 == x3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String X = sc.next();
      sc.close();

      char[] x = X.toCharArray();

      int count = 0;
      for (int i = x.length - 1; 0 <= i; i--) {
        if (x[i] == '0') {
          count++;
        } else {
          break;
        }
      }

      String x2 = X.substring(0, x.length - count);

      StringBuffer sb = new StringBuffer(x2);
      String x3 = sb.reverse().toString();

      if (x2.equals(x3)) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    