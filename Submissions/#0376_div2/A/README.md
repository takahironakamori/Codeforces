### Codeforces Round #376 (Div. 2)

# A. Night at the Museum

  [問題はこちら](https://codeforces.com/problemset/problem/731/A)
  
- 概要<br>
  a から z までキーが円周上にならんだダイヤル型のキーがある。<br>
  文字列が与えられるので、文字列の順番でキーを動かしていくと最低何回キーを動かす必要があるか。<br>
  キーを動かすとは、a から b へと 1 文字分、ダイヤルを回すことを言う。
  
- 発想<br>
  現在地と次の文字までの距離と、26 から現在地と次の文字までの距離を引いた値の小さい方が移動距離となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int answer = 0;
    int current = 1;
    for (int i = 0; i < s.length(); i++) {
      int next = (int) s[i] - 96;
      answer += min(abs(current - next), 26 - abs(current - next));
      current = next;
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
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int answer = 0;
      int current = 1;
      for (int i = 0; i < S.length(); i++) {
        int next = (int) s[i] - 96;
        answer += Math.min(Math.abs(current - next), 26 - Math.abs(current - next));
        current = next;
      }

      System.out.println(answer);

    }

  }
  ```
    