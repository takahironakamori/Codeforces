### Codeforces Round #481 (Div. 3)

# B. File Name

  [問題はこちら](https://codeforces.com/problemset/problem/978/B)
  
- 概要<br>
  n 文字の文字列 s が与えられる。<br>
  x が 3 文字以上並んでいる文字列はよくない。<br>
  よくない部分は削除することにする。<br>
  最低何文字、削除すればいいか。
  
  
- 発想<br>
  x が何文字続いているかを数える。<br>
  x 3文字以上続いている場合は、続いている文字数 - 2 だけ削除する。<br>
  配列で x か否かを判定する場合、最後が x の場合に注意する。
  
  
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
    int count = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'x') {
        count++;
      } else {
        if (2 < count) {
          answer += count - 2;
        }
        count = 0;
      }
    }

    if (2 < count) {
      answer += count - 2;
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
      int count = 0;

      for (int i = 0; i < n; i++) {
        if (s[i].equals("x")) {
          count++;
        } else {
          if (2 < count) {
            answer += count - 2;
          }
          count = 0;
        }
      }

      if (2 < count) {
        answer += count - 2;
      }

      System.out.println(answer);

    }

  }
  ```
    