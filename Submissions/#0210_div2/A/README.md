### Codeforces Round #210 (Div. 2)

# A. Levko and Table

  [問題はこちら](https://codeforces.com/problemset/problem/361/A)
  
- 概要<br>
  n * n のマスに数字を入れて、全ての列、全ての行の合計を k にしたい。<br>
  このような条件を満たす n * n の表を 1 パターン出力せよ。<br>
  列と列の間は半角スペースで開ける。
  
- 発想<br>
  全ての列、全ての行で、1個だけ k を使い、他をすべて 0 とする表を作ればいい。<br>
  例<br>
  4 0 0<br>
  0 4 0<br>
  0 0 4<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) {
          cout << k << " ";
        } else {
          cout << 0 << " ";
        }
      }
      cout << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int k = sc.nextInt();
      sc.close();

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (i == j) {
            System.out.print(k + " ");
          } else {
            System.out.print(0 + " ");
          }
        }
        System.out.println("");
      }

    }

  }
  ```
    