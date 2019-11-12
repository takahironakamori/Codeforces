### Educational Codeforces Round 57 (Rated for Div. 2)

# A. Find Divisible

  [問題はこちら](https://codeforces.com/problemset/problem/1096/A)
  
- 概要<br>
  2 つの整数 l と r がある。<br>
  以下の条件を満たす x と y を出力せよ。<br>
  ・ l 以上 r 以下である。<br>
  ・ x ≠ y である。<br>
  ・ y は x で割り切れる。<br>
  x と y の組み合わせは 1 つ出力すればいい。<br>
  t 個クエリが与えられる。<br>
  
  
- 発想<br>
  x は l、y は r / l（切り捨て）でいい。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      int l, r;
      cin >> l >> r;
      int d = r / l;
      cout << l << " " << d * l << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();

      for (int i = 0; i < t; i++) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        int d = r / l;
        System.out.println(l + " " + d * l);
      }

      sc.close();

    }

  }
  ```
    