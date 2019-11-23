### Codeforces Round #270

# A. Design Tutorial: Learn from Math

  [問題はこちら](https://codeforces.com/problemset/problem/472/A)
  
- 概要<br>
  12 以上の整数 n が与えられる。<br>
  n を x + y = n になるように、x、 y を求めたいが、x、y はそれぞれ合成数（ 1 とその数自身以外の約数を持つ数）でなければならない。<br>
  条件を満たす x、y を 1 組出力せよ。<br>
  複数ある場合はどの組み合わせでもいい。
  
- 発想<br>
  n が偶数の場合は、x = n - 8、y = n - x<br>
  n が奇数の場合は、x = n - 9、y = n - x でいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int x = 0;
    int y = 0;

    if (n % 2 == 0) {
      x = n - 8;
      y = n - x;
    } else {
      x = n - 9;
      y = n - x;
    }

    cout << x << " " << y << endl;

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

      int x = 0;
      int y = 0;

      if (n % 2 == 0) {
        x = n - 8;
        y = n - x;
      } else {
        x = n - 9;
        y = n - x;
      }

      System.out.println(x + " " + y);

    }

  }
  ```
    