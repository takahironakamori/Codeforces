### Codeforces Round #556 (Div. 2)

# A. Stock Arbitraging

  [問題はこちら](https://codeforces.com/problemset/problem/1150/A)
  
- 概要<br>
  r 個の bourles を持っている。<br>
  午前に n 回、午後に m 回の株の取引が行われる。<br>
  午前の i 回目の取引は、s_i bourles で株を買うことができる。<br>
  午後の i 回目の取引は、b_i bourles で株を買うことができる。<br>

  
- 発想<br>
  午前の取引の中で最も小さい数（minS）を得る。<br>
  午後の取引の中で最も大きな数（maxB）を得る。<br>
  minB <= minS なら何もしない。<br>
  minS < minB なら r で minS を買えるだけ買って、<br>
  maxB で全部売る。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, r;
    cin >> n >> m >> r;

    int minS = 1010;
    for (int i = 0; i < n; i++) {
      int s;
      cin >> s;
      minS = min(minS, s);
    }

    int maxB = 0;
    for (int i = 0; i < m; i++) {
      int b;
      cin >> b;
      maxB = max(maxB, b);
    }

    if (minS < maxB) {
      int count = r / minS;
      r = r % minS + count * maxB;
    }

    cout << r << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int m = sc.nextInt();
      int r = sc.nextInt();

      int minS = 1010;
      for (int i = 0; i < n; i++) {
        int s = sc.nextInt();
        minS = Math.min(minS, s);
      }

      int maxB = 0;
      for (int i = 0; i < m; i++) {
        int b = sc.nextInt();
        maxB = Math.max(maxB, b);
      }

      sc.close();

      if (minS < maxB) {
        int count = r / minS;
        r = r % minS + count * maxB;
      }

      System.out.println(r);

    }

  }
  ```
    