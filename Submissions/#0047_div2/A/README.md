### Codeforces Beta Round #47 (Div. 2)

# A. Domino piling

  [問題はこちら](https://codeforces.com/problemset/problem/50/A)
  
- 概要<br>
  M * N のマス目に 2 * 1 のドミノをできるかぎりしきつめたい。<br>
  何個しきつめることができるか。
  
- 発想<br>
  M * N / 2 で小数点以下を切り捨てた値と等しい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    double M, N;
    cin >> M >> N;

    cout << floor(M * N / 2) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      double M = sc.nextDouble();
      double N = sc.nextDouble();
      sc.close();

      System.out.println((int) Math.floor(M * N / 2));

    }

  }
  ```
    