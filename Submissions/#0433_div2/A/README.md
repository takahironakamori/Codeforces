### Codeforces Round #433 (Div. 2, based on Olympiad of Metropolises)

# A. Fraction

  [問題はこちら](https://codeforces.com/problemset/problem/854/A)
  
- 概要<br>
  n が与えられる。<br>
  以下の条件を満たす a と b を探す。<br>
  ・n = a + b <br>
  ・a < b であること<br>
  ・a と b は互いに素である<br>
  a / b が最大のものを出力せよ。
  
  
- 発想<br>
  1 から n / 2 まで順番に調べる。
  
  
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

  int main() {

    long n;
    cin >> n;

    int answer = 0;
    double v = 0;

    for (int i = 1; i <= n / 2; i++) {
      long g = gcd(i, n - i);
      if (g == 1) {
        if (v < (double) i / (n - i)) {
          v = (double) i / (n - i);
          answer = i;
        }
      }
    }

    cout << answer << " " << n - answer << endl;

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

      int answer = 0;
      double v = 0;

      for (int i = 1; i <= n / 2; i++) {
        long g = gcd(i, n - i);
        if (g == 1) {
          if (v < (double) i / (n - i)) {
            v = (double) i / (n - i);
            answer = i;
          }
        }
      }

      System.out.println(answer + " " + (n - answer));

    }

    static long gcd(long a, long b) {
      if (b == 0) {
        return a;
      }
      return gcd(b, a % b);
    }

  }
  ```
    