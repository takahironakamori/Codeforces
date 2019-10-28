### Codeforces Round #161 (Div. 2)

# A. Beautiful Matrix

  [問題はこちら](https://codeforces.com/problemset/problem/263/A)
  
- 概要<br>
  5 × 5 マスに 0 が 24　個と 1 が 1 個ある。<br>
  次の操作を何回かして 1 を中心に移動させる。<br>
  ・隣り合う 2 つの行を入れ替える。<br>
  ・隣り合う 2 つの列を入れ替える。<br>
  最小で何回入れ替えればいいか。
  
- 発想<br>
  1 の位置を確認して、行の中心と列の中心に移動するのに必要なマス目の数が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        int v;
        cin >> v;
        if (v == 1) {
          cout << abs(j - 2) + abs(i - 2) << endl;
        }
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
          int v = sc.nextInt();
          if (v == 1) {
            System.out.println(Math.abs(j - 2) + Math.abs(i - 2));
          }
        }
      }

      sc.close();

    }

  }
  ```
    