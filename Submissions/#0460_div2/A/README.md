### Codeforces Round #460 (Div. 2)

# A. Supermarket

  [問題はこちら](https://codeforces.com/problemset/problem/919/A)
  
- 概要<br>
  スーパーマーケットが n 箇所ある。<br>
  i 箇所目のスーパーマーケットには、b キロあたり a yuan（独自通貨と考えていい）でりんごを買うことができる。<br>
  m キロのりんごが欲しい。<br>
  最も安く買えるスーパーマーケットで買った場合のコストを出力せよ。
  
  
- 発想<br>
  a * m / b が最も小さいものを出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    double answer = 100000000;

    for (int i = 0; i < n; i++) {
      double a, b;
      cin >> a >> b;
      answer = min(answer, a * m / b);
    }

    printf("%.16f", answer);
    printf("\n");

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();
      int m = sc.nextInt();

      double answer = 100000000;

      for (int i = 0; i < n; i++) {
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        answer = Math.min(answer, a * m / b);
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    