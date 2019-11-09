### Codeforces Round #379 (Div. 2)

# B. Anton and Digits

  [問題はこちら](https://codeforces.com/problemset/problem/734/B)
  
- 概要<br>
  k_2 は 2 の個数、k_3 は 3 の個数、k_5 は 5 の個数、k_6 は 6 の個数として与えられる。<br>
  これらの数字を使って最大の総和の値を求めたい。<br>
  しかし、これらの数値を使って作ることができるのは、32 と 256 である。<br>
  最大の総和の値を求めよ。

  
- 発想<br>
  k_2, k_5, k_6 の数値で最も小さい数を探し、できる限り 256 を作る。<br>
  k_2 の残りと k_3 の小さい数から、できる限り 32 を作る。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int count = min(k2, k5);

    count = min(count, k6);

    int answer = count * 200 + count * 50  + count * 6;

    count = min(k3, k2 - count);

    answer += count * 30 + count * 2;

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int k2 = sc.nextInt();
      int k3 = sc.nextInt();
      int k5 = sc.nextInt();
      int k6 = sc.nextInt();
      sc.close();

      int count = Math.min(k2, k5);

      count = Math.min(count, k6);

      int answer = count * 200 + count * 50  + count * 6;

      count = Math.min(k3, k2 - count);

      answer += count * 30 + count * 2;

      System.out.println(answer);

    }

  }
  ```
    