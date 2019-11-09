### Codeforces Round #395 (Div. 2)

# A. Taymyr is calling you

  [問題はこちら](https://codeforces.com/problemset/problem/764/A)
  
- 概要<br>
  Taymyr は n 分ごとに Dujikov に電話をかける。<br>
  Dujikov は忙しいので、m 分ごとにしか電話に出ることができない。<br>
  z 分までに間に  Dujikov が Taymyr の電話に出ることができるのは何回か。
  
  
- 発想<br>
  z を、n と m の最小公倍数で割る。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  long gcd(long a, long b) {

    if (b == 0) {
      return a;
    }

    return gcd(b, a % b);

  }

  long lcm(long a, long b) {

    return a / gcd(a, b) * b;

  }

  int main() {

    long n, m, z;
    cin >> n >> m >> z;

    long l = lcm(n, m);

    int answer = z / l;

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      long n = sc.nextLong();
      long m = sc.nextLong();
      long z = sc.nextLong();
      sc.close();

      long l = lcm(n, m);

      long answer = z / l;

      System.out.println(answer);

    }

    static long gcd(long a, long b) {

      if (b == 0) {
        return a;
      }

      return gcd(b, a % b);

    }

    static long lcm(long a, long b) {

      return a / gcd(a, b) * b;

    }

  }
  ```
    