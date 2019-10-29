### Codeforces Round #322 (Div. 2)

# A. Vasya the Hipster

  [問題はこちら](https://codeforces.com/problemset/problem/581/A)
  
- 概要<br>
  a 本の赤の靴下と b 本の青の靴下がある。<br>
  色違いで靴下を何日履くことができるか、また、その後、同じ色の靴下を履くことができるのは何日か。<br>
  なお、1 度履いた靴下は捨てるものとする。
  
  
- 発想<br>
  a と b で少ない方の本数だけ色違いで履くことができる。<br>
  a と b の少ない方を引いた残りを 2 で割った数が同じ色の靴下を履くことができる日数となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    double a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << (int) abs(a - b) / 2 << endl; 

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      sc.close();

      System.out.println(Math.min(a,b) + " " + (int) Math.abs(a - b) / 2);

    }

  }
  ```
    