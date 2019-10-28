### Codeforces Beta Round #126 (Div. 2)

# B. Drinks

  [問題はこちら](https://codeforces.com/problemset/problem/200/B)
  
- 概要<br>
  合計 n リットルのオレンジジュースがある。<br>
  オレンジが入っている割合は P_i パーセントである。<br>
  すべてのジュースを合計したとき、オレンジが入っている割合はいくつか。
  
- 発想<br>
  P_i をすべて合計して、n で割る。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
      double p;
      cin >> p;  
      sum += p;
    }

    cout << setprecision(11) << sum / (double) n << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      double sum = 0;
      for (int i = 0; i < n; i++) {
        double p = sc.nextDouble();
        sum += p;
      }
      sc.close();

      System.out.println(sum /(double) n);    

    }

  }
  ```
    