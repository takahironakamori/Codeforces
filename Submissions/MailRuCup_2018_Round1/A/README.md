### Mail.Ru Cup 2018 Round 1

# A. Elevator or Stairs?

  [問題はこちら](https://codeforces.com/problemset/problem/1054/A)
  
- 概要<br>
  x 階から y 階へ移動するのに階段とエレベータでどちらが早いか。<br>
  ただし、階段を使う場合は、1 階分を移動するのに t_1 かかる。<br>
  エレベータを使う場合は、1 階分を移動するのに t_2 かかり、ドアを開ける、閉じるのに t_3 かかる。<br>
  エレベータは、z 階にいる。
  エレベータの方が早い場合は、YES を、階段の方が早い場合は、NO を出力せよ。
  
- 発想<br>
  階段で移動する場合は、abs(x - y) * t_1<br>
  エレベーターで移動する場合は、abs(z - x) * t_2 + t_3 + t_3 + abs(x - y) * t_2 + t_3<br>
  これらを比較する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;

    string answer = "YES";

    int d1 = abs(x - y);
    int d2 = abs(x - y) + abs(x - z);

    if (d1 * t1 < d2 * t2 + t3 * 3) {
      answer = "NO";
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
      int x = sc.nextInt();
      int y = sc.nextInt();
      int z = sc.nextInt();
      int t1 = sc.nextInt();
      int t2 = sc.nextInt();
      int t3 = sc.nextInt();
      sc.close();

      String answer = "YES";

      int d1 = Math.abs(x - y);
      int d2 = Math.abs(x - y) + Math.abs(x - z);

      if (d1 * t1 < d2 * t2 + t3 * 3) {
        answer = "NO";
      }

      System.out.println(answer);

    }

  }
  ```
    