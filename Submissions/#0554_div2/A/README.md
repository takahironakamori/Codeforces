### Codeforces Round #554 (Div. 2)

# A. Neko Finds Grapes

  [問題はこちら](https://codeforces.com/problemset/problem/1152/A)
  
- 概要<br>
  n 個の宝箱と m 個の鍵がある。<br>
  i 番目の宝箱には、a_i が i 番目の鍵には b_i の番号が付いている。<br>
  宝箱と鍵の番号の合計が奇数の場合、宝箱を開けることができる。<br>
  鍵は 1 つの宝箱にしか使えないとすると、最大何個の宝箱を開けることができるか。

  
- 発想<br>
  偶数の番号が付いている宝箱の数と奇数の番号が付いている鍵の数の小さい方と、<br>
  奇数の番号が付いている宝箱の数と偶数の番号が付いている鍵の数の小さい方の合計が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    int nO = 0;
    int nE = 0;
    int mO = 0;
    int mE = 0;

    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      if (v % 2 == 1) {
        nO++;
      } else {
        nE++;
      }
    }

    for (int i = 0; i < m; i++) {
      int v;
      cin >> v;
      if (v % 2 == 1) {
        mO++;
      } else {
        mE++;
      }
    }

    int answer = min(nO, mE) + min(nE, mO);

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
      int m = sc.nextInt();

      int nO = 0;
      int nE = 0;
      int mO = 0;
      int mE = 0;

      for (int i = 0; i < n; i++) {
        int v = sc.nextInt();
        if (v % 2 == 1) {
          nO++;
        } else {
          nE++;
        }
      }

      for (int i = 0; i < m; i++) {
        int v = sc.nextInt();
        if (v % 2 == 1) {
          mO++;
        } else {
          mE++;
        }
      }

      sc.close();

      int answer = Math.min(nO, mE) + Math.min(nE, mO);

      System.out.println(answer);
    }

  }
  ```
    