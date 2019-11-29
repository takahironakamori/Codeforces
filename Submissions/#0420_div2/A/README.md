### Codeforces Round #420 (Div. 2)

# A. Vladik and Courtesy

  [問題はこちら](https://codeforces.com/problemset/problem/811/A)
  
- 概要<br>
  n * n のマスがあり、i 行、j 列目の値は、a_i_j として与えられる。<br>
  以下の条件を満たすか否かを出力せよ。<br>
  ・a_i_j = 1 のときは除くすべての a_i_j で、a_i_j = a_i_x + a_y_j が存在する。<br>
  ・a_i_x とは a_i_j と同じ列にある値のうち、x 番目の値を示す。<br>
  ・a_y_j とは a_i_j と同じ行にある値のうち、y 番目の値を示す。
  
  
- 発想<br>
  順番に調べていく。<br>
  単純に書くと、n^4 くらいの計算量になるが、処理自体は軽いので間に合う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {

        if (a[i][j] == 1) {
          continue;
        }

        bool flg = false;

        for (int k = 0; k < n; k++){

          if (k == i) {
            continue;
          }

          for (int l = 0; l < n; l++){
            if (l == j) {
              continue;
            }

            if (a[i][j] == a[i][l] + a[k][j]) {
              flg = true;
              break;
            }

          }

          if (flg) {
            break;
          }

        }

        if (!flg) {
          cout << "No" << endl;
          return 0;
        }

      }
    }

    cout << "Yes" << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();

      int[][] a = new int[n][n];

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          a[i][j] = sc.nextInt();
        }
      }

      sc.close();

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

          if (a[i][j] == 1) {
            continue;
          }

          boolean flg = false;

          for (int k = 0; k < n; k++){

            if (k == i) {
              continue;
            }

            for (int l = 0; l < n; l++){
              if (l == j) {
                continue;
              }

              if (a[i][j] == a[i][l] + a[k][j]) {
                flg = true;
                break;
              }

            }

            if (flg) {
              break;
            }

          }

          if (!flg) {
            System.out.println("No");
            return;
          }

        }
      }

      System.out.println("Yes");

    }

  }
  ```
    