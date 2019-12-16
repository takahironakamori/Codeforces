### Manthan, Codefest 19

# A. XORinacci

  [問題はこちら](https://codeforces.com/contest/1208/problem/A)
  
- 概要<br>
  f(0) = a<br>
  f(1) = b<br>
  f(n) = f(n - 1) ⊕ f(n - 2)<br>
  n > 1, ⊕ はXOR演算を示す<br>
  a, b, n が T 回与えられるので f(n) を求めよ。
  
  
- 発想<br>
  a = 3, b = 4 で考えると、<br>
  n = 3 のとき、<br>
  3 XOR 4 = 7<br>
  <br>
      011<br>
  XOR 100<br>
     =111<br>
  <br>
  となる。<br>
  n = 4 のとき、<br>
  4 XOR 7 = 3<br>
    <br>
      111<br>
  XOR 100<br>
     =011<br>
  <br>
  n = 5 のとき、<br>
  7 XOR 3 = 4<br>
    <br>
      111<br>
  XOR 011<br>
     =100<br>
  <br>
  n = 6 のとき、<br>
  3 XOR 4 = 7<br>
  ... と 3(a), 4(b), 7(a XOR b), 3(a), 4(b), 7(a XOR b)... の繰り返しになるので、<br>
  n を 3 で割ったあまりに応じて、a, b, a XOR b を出力する。
  
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    while (0 < t){

      int a, b, n;
      cin >> a >> b >> n;

      switch (n % 3) {
        case 0:
          cout << a << endl;
        break;
        case 1:
          cout << b << endl;
        break;
        default:
          cout << (a ^ b) << endl;
      }

      t--;

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

      while(0 < t) {

        int a = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();

        switch(n % 3) {
          case 0:
            System.out.println(a);
          break;
          case 1:
            System.out.println(b);
          break;
          default:
            System.out.println(a ^ b);
        }

        t--;

      }

      sc.close();

    }

  }
  ```
    