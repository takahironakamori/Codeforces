### Codeforces Round #529 (Div. 3)

# A. Repeating Cipher

  [問題はこちら](https://codeforces.com/problemset/problem/1095/A)
  
- 概要<br>
  暗号のルールは以下の通り。<br>
  ・1 文字目は 1 回表示。<br>
  ・2 文字目は 2 回表示。<br>
  ・3 文字目は 3 回表示。<br>
  ：<br>
  ・m 文字目は m 回表示。<br>
  暗号化済みの n 文字の s が与えられるので、暗号化前の文字列を出力せよ。

  
- 発想<br>
  s について、暗号化前の 1 文字目は s の 1 文字使い、2 文字目は s の 2 文字使い、3 文字目は s の 3 文字使うため、<br>
  n 文字目は s の n - 1 のときの文字数 + 1 文字目を取得すればいい。<br>
  配列を 0 から数えている場合は、n - 1 のときの文字数目の文字を取得する。
  
  
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
    int i = 0;

    while (i < n) {
      answer += s[i];
      count++;
      i += count;
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

      String answer = "";

      int count = 0;
      int i = 0;

      while (i < n) {
        answer += s[i];
        count++;
        i += count;
      }

      System.out.println(answer);

    }

  }
  ```
    