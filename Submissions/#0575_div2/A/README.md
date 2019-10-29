### Codeforces Round #575 (Div. 3)

# A. Three Piles of Candies

  [問題はこちら](https://codeforces.com/problemset/problem/1196/A)
  
- 概要<br>
  キャンディーの山が 3 つあって、2 人で順番に取り合って同じ数に分け合いたい。<br>
  最大でそれぞれ何個のキャンディーを手に入れることができるか。

  
- 発想<br>
  3 つの山のキャンディーの数をすべて足して 2 で割る。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
      long long a, b, c;
      cin >> a >> b >> c;

      cout << (a + b + c) / 2  << endl;
    }  

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int q = sc.nextInt();

      for (int i = 0; i < q; i++) {
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        System.out.println((a + b + c) / 2);
      }

      sc.close();    

    }

  }
  ```
    