### Codeforces Round #557 (Div. 2) [based on Forethought Future Cup - Final Round]

# A. Zoning Restrictions Again

  [問題はこちら](https://codeforces.com/problemset/problem/1162/A)
  
- 概要<br>
  位置 1 から位置 n までのスポットに家を立てた。<br>
  それぞれ、0 から h メールの高さがある。<br>
  これらの家は高さの 2 乗の利益をもたらす。<br>
  m 個の区画整理が行われた。<br>
  i 番目の区画整理は、位置 l_i から位置 r_i（r_i を含む）の家は、x までの高さにする必要がある。<br>
  すべての区画整理に対応した後の最大の利益額はいくらか。
  
  
- 発想<br>
  1 から n まで 最大の h メートルであったと仮定する。<br>
  m 個の区画整理について、h と x_i で小さい方を家の高さとする。<br>
  位置については、複数回、区画整理が行われることに注意する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, h, m;
    cin >> n >> h >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      a[i] = h;
    }

    for (int i = 0; i < m; i++) {
      int l, r, x;
      cin >> l >> r >> x;
      for (int j = l; j <= r; j++) {
        a[j - 1] = min(a[j - 1], x);
      }
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
      answer += a[i] * a[i];
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
      int h = sc.nextInt();
      int m = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = h;
      }

      for (int i = 0; i < m; i++) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        int x = sc.nextInt();
        for (int j = l; j <= r; j++) {
          a[j - 1] = Math.min(a[j - 1], x);
        }
      }

      sc.close();

      int answer = 0;

      for (int i = 0; i < n; i++) {
        answer += a[i] * a[i];
      }

      System.out.println(answer);

    }

  }
  ```
    