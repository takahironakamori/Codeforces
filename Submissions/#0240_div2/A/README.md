### Codeforces Round #240 (Div. 2)

# A. Mashmokh and Lights

  [問題はこちら](https://codeforces.com/problemset/problem/415/A)
  
- 概要<br>
  1 から n まで番号がついたライトがある。<br>
  すべてオンの状態にある。<br>
  i 番目のボタンを押すと、i番目以降でオンになっているライトがオフになる。<br>
  m 回ボタンの操作をする。<br>
  i 回目の操作で b_i のボタンを押す。<br>
  各ライトについて、どのボタンを押されてオフになったのかを出力せよ。
  
  
- 発想<br>
  ライトの状態を保持するために、ボタンの数を要素数とし、初期地 0 の配列を用意する。<br>
  押されたボタン以降のライトが 0 のとき、押されたボタンの番号をいれる。<br>
  m 回分終わったら、配列を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> b(n + 1);
    for (int i = 0; i < m; i++) {
      int k;
      cin >> k;
      for (int j = k; j < n + 1; j++) {
        if (b[j] == 0) {
          b[j] = k;
        }
      }
    }

    for (int i = 1; i < n + 1; i++) {
      cout << b[i] << " ";
    }

    cout << endl;

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

      int[] b = new int[n + 1];
      for (int i = 0; i < m; i++) {
        int k = sc.nextInt();
        for (int j = k; j < n + 1; j++) {
          if (b[j] == 0) {
            b[j] = k;
          }
        }
      }
      sc.close();

      for (int i = 1; i < n + 1; i++) {
        System.out.print(b[i] + " ");
      }

      System.out.println("");

    }

  }
  ```
    