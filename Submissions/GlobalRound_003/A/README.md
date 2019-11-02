### Codeforces Global Round 3

# A. Another One Bites The Dust

  [問題はこちら](https://codeforces.com/problemset/problem/1148/A)
  
- 概要<br>
  文字列 "a" が a 個、"b" が b 個、"ab" が c 個与えられる。<br>
  これらの文字列を使ってできる限り長い文字列を作りたい。<br>
  しかし、"a" の次は "b"　が、"b" の次は "a" が必ず続くようにしなければならない。<br>
  この条件を満たす場合の最大の文字数はいくつか。
  
- 発想<br>
  まず、"ab" をつなげられるだけつなげる。<br>
  すなわち、文字列の長さは、c * 2 となる。<br>
  そして、"a" と "b" で作れる最大の文字列数は、<br>
  "a" と "b" が同じであれば、a + b を加える<br>
  "a" < "b" であれば、a + a + 1 を加える<br>
  "a" > "b" であれば、b + b + 1 を加える<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long a, b, c;
    cin >> a >> b >> c;

    long long answer = 0;

    answer += c * 2;

    if (1 < a - b) {
      cout << answer + b + b + 1 << endl;
    } else if (1 < b - a) {
      cout << answer + a + a + 1 << endl;
    } else {
      cout << answer + a + b << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      long a = sc.nextLong();
      long b = sc.nextLong();
      long c = sc.nextLong();
      sc.close();

      long answer = 0;

      answer += c * 2;

      if (1 < a - b) {
        System.out.println(answer + b + b + 1);
      } else if (1 < b - a) {
        System.out.println(answer + a + a + 1);
      } else {
        System.out.println(answer + a + b);
      }

    }

  }
  ```
    