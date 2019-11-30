### Codeforces Round #429 (Div. 2)

# A. Generous Kefa

  [問題はこちら](https://codeforces.com/problemset/problem/841/A)
  
- 概要<br>
  s 個の風船がある。<br>
  i 番目の風船の色は s_i であり、小文字のアルファベットで表される。<br>
  k 人の友達がいて、風船をあげたいが、友達は同じ色の風船をもらうのを嫌う。<br>
  風船をもらわない友達がいてもかまわない。<br>
  s 個の全ての風船を友達に配ることができる場合は YES を、できない場合は NO を出力せよ。
  
- 発想<br>
  色ごとの風船の個数が k より多いと配ることができない。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> color(26);

    for (int i = 0; i < n; i++) {
      color[s[i] - 'a']++;
    }

    string answer = "YES";

    for (int i = 0; i < 26; i++) {
      if (k < color[i]) {
        answer = "NO";
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
      int k = sc.nextInt();
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();
      int[] color = new int[26];

      for (int i = 0; i < n; i++) {
        color[s[i] - 'a']++;
      }

      String answer = "YES";

      for (int i = 0; i < 26; i++) {
        if (k < color[i]) {
          answer = "NO";
        }
      }

      System.out.println(answer);

    }

  }
  ```
    