### Codeforces Round #468 (Div. 2, based on Technocup 2018 Final Round)

# A. Friends Meeting

  [問題はこちら](https://codeforces.com/problemset/problem/931/A)
  
- 概要<br>
  一直線上の a と b の位置にそれぞれ 1 人ずつがいる。<br>
  a と b を同じ位置に移動させたいが、移動には 1 歩なら 1、 2 歩なら 2、n 歩なら n のコストが加算される。<br>
  それぞれの人が移動できるとして、同じに移動させた場合の最低のコストを出力せよ。
  
- 発想<br>
  a と b をできるかぎりそれぞれ動かす方が総コストが低い。<br>
  a と b　の距離（絶対値）が偶数の場合は、a と b がそれぞれ距離（絶対値）/ 2 歩進む。<br>
  距離（絶対値）/ 2 歩までのコストは、n * (n + 1) / 2 になり、a と b を計算するので、 / 2 計算しなければいい。<br>
  a と b　の距離（絶対値）が奇数の場合は、どちらかが 1 歩多くなりそのコストは距離（絶対値）/ 2 + 1となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int d = abs(a - b);

    if (d % 2 == 0) {
      d /= 2;
      cout << d * (d + 1) << endl;
    } else {
      d /= 2;
      cout << d * (d + 1) + d + 1 << endl;
    }

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

      int d = Math.abs(a - b);

      if (d % 2 == 0) {
        d /= 2;
        System.out.println(d * (d + 1));
      } else {
        d /= 2;
        System.out.println(d * (d + 1) + d + 1);
      }

    }

  }
  ```
    