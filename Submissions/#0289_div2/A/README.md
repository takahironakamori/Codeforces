### Codeforces Round #289 (Div. 2)

# A. Maximum in Table

  [問題はこちら](https://codeforces.com/problemset/problem/509/A)
  
- 概要<br>
  n * n のマス目がある。<br>
  マス目を a とすると、a_i_1 = a_1_i = 1、すなわち、マス目の 1 行目と 1 列目はすべて 1 である。<br>
  その他のマス目は、a_i_j = a_i-1_j + a_i_j-1、すなわち、すぐ右のマス目 + すぐ上のマス目である。<br>
  マス目の中での最大値を出力せよ。
  
  
- 発想<br>
  n * n のマス目の場合は、マス目の右下、すなわち（[0][0]から始めると） [n-1][n-1]のマス目の値が最大となる。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int l = 0; l < n; l++) {
        if (i == 0 || l == 0) {
          v[i][l] = 1;
        } else {
          v[i][l] = v[i][l-1] + v[i-1][l];
        }
      }
    }

    cout << v[n-1][n-1] << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      int[][] v = new int[n][n];
      for (int i = 0; i < n; i++) {
        for (int l = 0; l < n; l++) {
          if (i == 0 || l == 0) {
            v[i][l] = 1;
          } else {
            v[i][l] = v[i][l-1] + v[i-1][l];
          }
        }
      }

      System.out.println(v[n-1][n-1]);

    }

  }
  ```
    