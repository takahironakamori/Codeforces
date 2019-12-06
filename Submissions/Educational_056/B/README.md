### Educational Codeforces Round 56 (Rated for Div. 2)

# B. Letters Rearranging

  [問題はこちら](https://codeforces.com/problemset/problem/1093/B)
  
- 概要<br>
  英小文字の文字列 s がある。<br>
  文字列 s を並び替えることで、良い文字列にしたい。<br>
  良い文字列とは、回文になっていない文字列のことをいう。<br>
  t 個の文字列が与えられるので、それぞれ良い文字列にすることができる場合は、その文字列を 1 つ出力せよ。<br>
  良い文字列にすることができない場合は、-1 を出力せよ。
  
  
- 発想<br>
  1種類しか使われていない文字列は良い文字列にすることができない。<br>
  アルファベット順に並び替えて出力すれば回文にはならない。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) { 

      string s;
      cin >> s;

      vector<int> count(26);
      int mx = 0;
      for (int j = 0; j < s.size(); j++) {
        count[s[j] - 'a']++;
        mx = max(mx, count[s[j] - 'a']);
      }

      if (mx == s.size()) {
        cout << "-1" << endl;
      } else {
        for (int j = 0; j < 26; j++) {
          int c = count[j];
          for (int k = 0; k < c; k++) {
            cout << char(j + 97);
          }
        }
        cout << endl;
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
      int t = sc.nextInt();

      for (int i = 0; i < t; i++) { 

        String S = sc.next();
        char[] s = S.toCharArray();

        int[] count = new int[26];
        int mx = 0;
        for (int j = 0; j < s.length; j++) {
          count[s[j] - 'a']++;
          mx = Math.max(mx, count[s[j] - 'a']);
        }

        if (mx == s.length) {
          System.out.println("-1");
        } else {
          for (int j = 0; j < 26; j++) {
            int c = count[j];
            for (int k = 0; k < c; k++) {
              System.out.print(Character.toChars(j + 97));
            }
          }
          System.out.println("");
        }

      }

      sc.close();

    }

  }
  ```
    