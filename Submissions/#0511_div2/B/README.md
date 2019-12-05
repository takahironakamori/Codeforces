### Codeforces Round #511 (Div. 2)

# B. Cover Points

  [問題はこちら](https://codeforces.com/problemset/problem/1047/B)
  
- 概要<br>
  n 個の座標が与えられる。<br>
  i 番目の座標は、(x_i, y_i) である。<br>
  すべての点を覆うために、x軸、y軸を辺とした二等辺三角形を作りたい。<br>
  それぞれの点は、三角形の辺上にあってもいい。<br>
  これらを満たす二等辺三角形の短い方の辺の長さを出力せよ。
  
  
- 発想<br>
  各点、(x_i, y_i) について、x_i + y_i の最も大きい値が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    long long answer = 0;

    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      if (answer < x + y) {
        answer = x + y;
      }
    }

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      long answer = 0;

      for (int i = 0; i < n; i++) {
        int x = sc.nextInt();
        int y = sc.nextInt();
        if (answer < x + y) {
          answer = x + y;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    