### Codeforces Round #548 (Div. 2)

# A. Even Substrings

  [問題はこちら](https://codeforces.com/problemset/problem/1139/A)
  
- 概要<br>
  s 文字の文字列がある。<br>
  文字列は 1 から 9 までの 9 種類。<br>
  この文字列を l 番目から r 番目という組み合わせ（l <= r）を作りたい。<br>
  しかし、r 番目は偶数でなければらない。<br>
  何通り作ることができるか。

  
- 発想<br>
  1 文字ずつ偶数か奇数かを判定し、偶数の場合は、その文字の位置を加える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int answer = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] % 2 == 0) {
        answer += i + 1;
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

      String[] s = S.split("");

      int answer = 0;
      for (int i = 0; i < n; i++) {
        if (Integer.valueOf(s[i]) % 2 == 0) {
          answer += i + 1;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    