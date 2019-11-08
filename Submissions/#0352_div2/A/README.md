### Codeforces Round #352 (Div. 2)

# A. Summer Camp

  [問題はこちら](https://codeforces.com/problemset/problem/672/A)
  
- 概要<br>
  123456789101112131415...と整数を 1 列に並べた場合、 n 番目の数値を出力せよ。<br>
  
- 発想<br>
  123456789101112131415...を n 文字を超えるまで続けて、n - 1 番目の数値を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string answer = "";

    int current = 1;
    while (answer.size() < n) {
      answer += to_string(current);
      current++;
    }

    cout << answer[n - 1] << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      String A = "";

      int current = 1;

      while (A.length() < n) {
        A += String.valueOf(current);
        current++;
      }

      String[] a = A.split("");

      System.out.println(a[n - 1]);

    }

  }
  ```
    