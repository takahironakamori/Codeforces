### Forethought Future Cup - Elimination Round

# A. Love "A"

  [問題はこちら](https://codeforces.com/problemset/problem/1146/A)
  
- 概要<br>
  文字列 s が与えられる。<br>
  文字列 s の文字を削除し、a の数が過半数になるような文字列にしたい。<br>
  削除後（削除しないかもしれない）の文字数を出力せよ。
  
- 発想<br>
  s の中で a の個数を数える。<br>
  a * 2 - 1 と s の文字数を比較して少ない方を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string v;
    cin >> v;

    int count = 0;

    for (int i = 0; i < v.size(); i++) {
      if (v[i] == 'a') {
        count++;
      }
    }

    if (count * 2 - 1 < v.size()) {
      cout << count * 2 - 1 << endl;
    } else {
      cout << v.size() << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String V = sc.next();
      sc.close();

      String[] v = V.split("");

      int count = 0;

      for (int i = 0; i < v.length; i++) {
        if (v[i].equals("a")) {
          count++;
        }
      }

      if (count * 2 - 1 < v.length) {
        System.out.println(count * 2 - 1);
      } else {
        System.out.println(v.length);
      }

    }

  }
  ```
    