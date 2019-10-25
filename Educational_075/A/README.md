### Educational Codeforces Round 75(Rated for Div.2)

# A. Broken Keyboard

  [問題はこちら](https://codeforces.com/contest/1251/problem/A)
  
- 概要<br>
  アルファベット（小文字）26文字が打てるキーボードがある。<br>
  壊れているキーと壊れていないキーがある。<br>
  壊れているキーとは、キーを 1 度打つと 2 文字入力されてしまう。<br>
  入力した結果 s を得ることができるので、壊れていないキーをアルファベット順に出力しなさい。<br>
  
- 発想<br>
  入力した結果 s の中に偶数文字連続している文字は壊れている可能性がある。<br>
  連続している文字列が奇数のものを保持しておき、アルファベット順に出力する。
  
  
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

      int n = s.length();
      vector<int> v(26);

      for (int j = 0; j < n; j++) {

        char x = s[j];
        int count = 0;

        while (s[j] == x) {
          j++;
          count++;
        }

        if (count % 2 == 1) {
          v[x - 'a'] = 1;
        }

        j--;

      }

      for (int j = 0; j < 26; j++) {
        if (v[j] == 1) {
          cout << char(j + 97); 
        }
      }

      cout << endl;
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
        int n = s.length;
        int[] v = new int[26];

        for (int j = 0; j < n; j++) {

          char current = s[j];
          int count = 0;
          boolean validate = true;

          while (validate) {
            if (j == n) {
              validate = false;
            } else if (current == s[j]) {
              j++;
              count++;
            } else {
              validate = false;
            }
          }

          if (count % 2 == 1) {
            v[(int) current - 97] = 1;
          }

          j--;

        }

        for (int j = 0; j < 26; j++) {
          if (v[j] == 1) {
            System.out.print(Character.toChars(j + 97)); 
          }
        }

        System.out.println("");

      }

      sc.close();

    }

  }
  ```
    