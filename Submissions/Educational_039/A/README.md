### Educational Codeforces Round 39 (Rated for Div. 2)

# A. Partition

  [問題はこちら](https://codeforces.com/problemset/problem/946/A)
  
- 概要<br>
  n 個の整数がある。<br>
  これらを B と C のグループに分けて、B - C の値を最大にしたい。<br>
  最大値を出力せよ。
  
- 発想<br>
  B に正の整数、C に負の整数を集める。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int B = 0;
    int C = 0;

    for (int i = 0; i < n; i++) {
      int A;
      cin >> A;
      if (0 <= A) {
        B += A;
      } else {
        C += A;
      }
    }

    cout << B - C << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int B = 0;
      int C = 0;

      for (int i = 0; i < n; i++) {
        int A = sc.nextInt();
        if (0 <= A) {
          B += A;
        } else {
          C += A;
        }
      }

      sc.close();

      System.out.println(B - C);

    }

  }
  ```
    