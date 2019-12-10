### Codeforces Round #550 (Div. 2)

# A. Diverse Strings

  [問題はこちら](https://codeforces.com/problemset/problem/1144/A)
  
- 概要<br>
  良い文字列とは、英小文字でアルファベット順に並べることができる文字列であり、英小文字は 2 回以上使っていない。<br>
  アルファベット順であるが、開始時は a でなくていもいいし、終了時は z でなくてもいい。<br>
  また、za はアルファベット順にならんでいるとはいえない。<br>
  n 個文字列が与えられるので、良い文字列は "Yes" をそうでない場合は "No" を出力せよ。
 
  
- 発想<br>
  アルファベットの26文字について何回使われているかを調べて、2回以上使っている文字があれば No を出力する。<br>
  また、1 回使われている文字のが 1 回だけ連続している場合は Yes を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

      string t;
      cin >> t;

      vector<int> count(26);

      for (int j = 0; j < t.size(); j++) {
        int k = (int) t[j] - 'a';
        count[k]++;
      }

      string answer = "Yes";
      bool flg = false;
      int change = 0;

      for (int j = 0; j < 26; j++) {
        if (2 <= count[j]) {
          answer = "No";
          break;
        } else if (count[j] == 1) {
          if (!flg) {
            flg = true;
            change++;
          }
        } else {
          if(flg) {
            change++;
            flg = false;
          }
        }
      }

      if (answer == "No") {
        cout << answer << endl;
      } else if (change <= 2) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
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
      int n = sc.nextInt();

      for (int i = 0; i < n; i++) {

        String T = sc.next();
        char[] t = T.toCharArray();

        int[] count = new int[26];

        for (int j = 0; j < t.length; j++) {
          int k = (int) t[j] - 'a';
          count[k]++;
        }

        String answer = "Yes";
        boolean flg = false;
        int change = 0;

        for (int j = 0; j < 26; j++) {
          if (2 <= count[j]) {
            answer = "No";
            break;
          } else if (count[j] == 1) {
            if (!flg) {
              flg = true;
              change++;
            }
          } else {
            if(flg) {
              change++;
              flg = false;
            }
          }
        }

        if (answer == "No") {
          System.out.println(answer);
        } else if (change <= 2) {
          System.out.println("Yes");
        } else {
          System.out.println("No");
        }

      }

      sc.close();

    }

  }
  ```
    