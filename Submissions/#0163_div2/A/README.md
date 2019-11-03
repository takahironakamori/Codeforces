### Codeforces Round #163 (Div. 2)

# A. Stones on the Table

  [問題はこちら](https://codeforces.com/problemset/problem/266/A)
  
- 概要<br>
  R, B, G の 3 種類で構成される n 文字の文字列が与えられる。<br>
  文字列の中で隣同士の文字が同じ箇所がないようするには、最低何文字変更する必要があるか。
  
- 発想<br>
  n 文字の文字列の中で、2文字同じ文字が続いている箇所の数だけ変更する必要がある。
  
  
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
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == s[i+1]) {
        answer++;
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
      for (int i = 0; i < n - 1; i++) {
        if (s[i].equals(s[i+1])) {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    