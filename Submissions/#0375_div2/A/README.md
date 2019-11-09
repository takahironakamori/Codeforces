### Codeforces Round #375 (Div. 2)

# A. The New Year: Meeting Friends

  [問題はこちら](https://codeforces.com/problemset/problem/723/A)
  
- 概要<br>
  一直線上に点が３つ、x1、x2、x3 がある。<br>
  すべての点を 1 回、行きたい。<br>
  x1、x2、x3 のどの点からスタートしてもいい。<br>
  すべての点に行くための最短移動距離を出力せよ。
  
- 発想<br>
  x1、x2、x3 の中での最大値からx1、x2、x3 の中での最小値を引けばいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int ma = max(x1, x2);
    int mi = min(x1, x2);

    ma = max(ma, x3);
    mi = min(mi, x3);

    cout << ma - mi << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int x1 = sc.nextInt();
      int x2 = sc.nextInt();
      int x3 = sc.nextInt();

      int max = Math.max(x1, x2);
      int min = Math.min(x1, x2);

      max = Math.max(max, x3);
      min = Math.min(min, x3);

      System.out.println(max - min);

    }

  }
  ```
    