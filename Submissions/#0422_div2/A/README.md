### Codeforces Round #422 (Div. 2)

# A. I'm bored with life

  [問題はこちら](https://codeforces.com/problemset/problem/822/A)
  
- 概要<br>
  A と B が与えられる。<br>
  1 から A までを掛けたもの（例：A = 4 の場合、1 * 2 * 3 * 4）と、1 から B までを掛けたものの最大公約数を出力せよ。
  
- 発想<br>
  例えば、4! = 1 * 2 * 3 * 4 = 24、3! = 1 * 2 * 3 = 6 となる。<br>
  24 と 6 の最大公約数は 6 = 1 * 2 * 3 となる。<br>
  1 * 2 * 3 * 4 = 24<br>
  1 * 2 * 3     = 6<br>
  とみると、最大公約数は上記 2 つの式の共通部分となる。<br>
  したがって、A と B の小さい方の数！でいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long A, B;
    cin >> A >> B ;

    int answer = 1;

    for (int i = 1; i <= min(A, B); i++) {
      answer *= i;
    }

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      long A = sc.nextLong();
      long B = sc.nextLong();
      sc.close();

      long answer = 1;

      for (int i = 1; i <= Math.min(A, B); i++) {
        answer *= i;
      }

      System.out.println(answer);

    }

  }
  ```
    