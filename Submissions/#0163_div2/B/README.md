### Codeforces Round #163 (Div. 2)

# B. Queue at the School

  [問題はこちら](https://codeforces.com/problemset/problem/266/B)
  
- 概要<br>
  n 人の生徒がいて 1 列に並んでいる。<br>
  女性の場合は G、男性の場合は B として表される。<br>
  1 回の移動で列の中で、男性と女性が並んでいるところを全て、ひっくり返す。<br>
  t 回移動した後、男女どのように並んでいるかを出力せよ。
  
  
- 発想<br>
  文字列内の全ての"GB"をひっくり返す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (int i = 0; i < t; i++) {
      bool flg = false;
      for (int j = 0; j < n - 1; j++) {
        if (s[j] == 'B' && s[j + 1] == 'G' && flg == false) {
          char s_ = s[j];
          s[j] = s[j + 1];
          s[j + 1] = s_;
          flg = true;
        } else {
          flg = false;
        }
      }
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
      int n = sc.nextInt();
      int t = sc.nextInt();
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      for (int i = 0; i < t; i++) {
        boolean flg = false;
        for (int j = 0; j < n - 1; j++) {
          if (s[j] == 'B' && s[j + 1] == 'G' && flg == false) {
            char s_ = s[j];
            s[j] = s[j + 1];
            s[j + 1] = s_;
            flg = true;
          } else {
            flg = false;
          }
        }
      }

      for (int i = 0; i < s.length; i++) {
        System.out.print(s[i]);
      }

      System.out.println("");

    }

  }
  ```
    