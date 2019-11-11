### Codeforces Round #525 (Div. 2)

# A. Ehab and another construction problem

  [問題はこちら](https://codeforces.com/problemset/problem/1088/A)
  
- 概要<br>
  整数 x が与えられる。<br>
  以下の条件を満たす 2 つの整数、a、b を出力せよ。<br>
  ・a, b ともに 1 以上、x 以下である。<br>
  ・a で b で割り切れる。<br>
  ・a * b は x 超である。<br>
  ・a / b は x 未満である。<br>
  条件を満たすものがない場合は -1 を出力せよ。<br>
  条件を満たすものが複数ある場合はどれか 1 組を出力せよ。

  
- 発想<br>
  x = 1 のときは条件を満たすものがない。<br>
  x = 2 のとき、b を 2 とすると、 a は 2 だと条件を満たす。<br>
  x = 3 のとき、b を 2 とすると、 a は 2 だと条件を満たす。<br>
  x = 4 のとき、b を 2 とすると、 a は 4 だと条件を満たす。<br>
  x = 5 のとき、b を 2 とすると、 a は 4 だと条件を満たす。<br>
  b を 2 とすると、a = x - x % 2 で条件を満たす数値が得られる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x;
    cin >> x;

    if (x == 1) {
      cout << -1 << endl;
    } else {
      int answer = x - x % 2;
      cout << answer << " " << 2 << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int x = sc.nextInt();
      sc.close();

      if (x == 1) {
        System.out.println(-1);
      } else {
        int answer = x - x % 2;
        System.out.println(answer + " " + 2);
      }

    }

  }
  ```
    