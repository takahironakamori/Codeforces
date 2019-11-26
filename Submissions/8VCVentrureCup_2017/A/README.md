### 8VC Venture Cup 2017 - Elimination Round

# A. PolandBall and Hypothesis

  [問題はこちら](https://codeforces.com/problemset/problem/755/A)
  
- 概要<br>
  n * m + 1 は素数になる。<br>
  n が与えられるので、上記の条件を満たさない m を出力せよ。
  
- 発想<br>
  m の上限が 10^3 なので、順番に素数判定をしても間に合う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  bool is_prime(long N) {
    for (long i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return N != 1;
  }

  int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= 1000; i++) {
      bool flg = is_prime(n * i + 1);
      if (flg == false) {
        cout << i << endl;
        return 0;
      }
    }

    return 0;

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

      for (int i = 1; i <= 1000; i++) {
        boolean flg = is_prime(n * i + 1);
        if (flg == false) {
          System.out.println(i);
          return;
        }
      }

      return;

    }

    static boolean is_prime (long N) {
      for (long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
          return false;
        }
      }
      return N != 1;
    }

  }
  ```
    