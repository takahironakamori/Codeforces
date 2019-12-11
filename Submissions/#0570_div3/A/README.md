### Codeforces Round #570 (Div.3)

# A. Nearest Interesting Number

  [問題はこちら](https://codeforces.com/problemset/problem/1183/A)
  
- 概要<br>
  整数 n 以上で、各桁の合計が 4 で割り切れる整数を出力せよ。<br>
  
  
- 発想<br>
  n から順番に各桁の合計が 4 で割り切れるか否かを確認する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int sum(int a) {

    int result = 0;

    while (a > 0) {
      result += a % 10;
      a /= 10;
    }

    return result;

  }

  int main() {

    int a;
    cin >> a;

    while (sum(a) % 4 != 0) {
      a++;
    }

    cout << a << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      sc.close();

      while (sum(a) % 4 != 0) {
        a++;
      }

      System.out.println(a);

    }

    static int sum(int a) {

      int result = 0;

      while (a > 0) {
        result += a % 10;
        a /= 10;
      }

      return result;

    }

  }
  ```
    