### Educational Codeforces Round 65 (Rated for Div. 2)

# A. Telephone Number

  [問題はこちら](https://codeforces.com/problemset/problem/1167/A)
  
- 概要<br>
  電話番号は 8 で始まる 11 桁の数字である。<br>
  n 文字の文字列 s が与えられる。<br>
  何文字でも文字を削除していいが、文字の順序を変えることはできない。<br>
  文字列 s を電話番号にすることができる場合は YES を、できない場合は NO を出力せよ。
  
- 発想<br>
  s の中に 8 がある位置を探す。<br>
  見つからなければ NO を出力する。<br>
  ある場合は、その位置以降10桁以上の数値があれば電話番号を作ることができる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      int n;
      cin >> n;
      string s;
      cin >> s;
      string answer = "NO";
      for (int j = 0; j < n; j++) {
        if (s[j] == '8' && j + 10 < n) {
          answer = "YES";
          break;
        }
      }
      cout << answer << endl;
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
        int n = sc.nextInt();
        String S = sc.next();
        String[] s = S.split("");
        String answer = "NO";
        for (int j = 0; j < n; j++) {
          if (s[j].equals("8") && j + 10 < n) {
            answer = "YES";
            break;
          }
        }
        System.out.println(answer);
      }

      sc.close();

    }

  }
  ```
    