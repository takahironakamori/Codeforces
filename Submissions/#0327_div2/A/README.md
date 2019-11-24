### Codeforces Round #327 (Div. 2)

# A. Wizards' Duel

  [問題はこちら](https://codeforces.com/problemset/problem/591/A)
  
- 概要<br>
  長さ l メートルの廊下の両端にハリーと敵がいる。<br>
  ハリーは、1 秒で p メートル進む、敵は 1 秒で、q メートル進む。<br>
  ハリーと敵が衝突するとき、ハリーは何メートル進んだときか。
  
  
- 発想<br>
  比の計算。<br>
  小数点での答えもありえるので、double型を使う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    double l, p, q;
    cin >> l >> p >> q;

    cout << l / (p + q) * p << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      double l = sc.nextDouble();
      double p = sc.nextDouble();
      double q = sc.nextDouble();
      sc.close();

      System.out.println(l / (p + q) * p);

    }

  }
  ```
    