### Codeforces Round #376 (Div. 2)

# A. Night at the Museum

  [問題はこちら](https://codeforces.com/problemset/problem/731/A)
  
- 概要<br>
  一直線上に点が３つ、x1、x2、x3 がある。<br>
  すべての点を 1 回、行きたい。<br>
  x1、x2、x3 のどの点からスタートしてもいい。<br>
  すべての点に行くための最短移動距離を出力せよ。
  
- 発想<br>
  x1、x2、x3 の中での最大値からx1、x2、x3 の中での最小値を引けばいい。
  
  
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
    