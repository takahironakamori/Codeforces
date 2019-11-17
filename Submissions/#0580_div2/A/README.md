### Codeforces Round #580 (Div. 2)

# A. Choose Two Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/1206/A)
  
- 概要<br>
  n 個の整数で構成される配列 A ( i 番目の整数は a_i )と m 個の整数で構成される配列 B ( i 番目の整数は b_i )とがある。<br>
  A と B からそれぞれ 1 個ずつ整数を選びたい。<br>
  しかし、選んだ整数 a_x + b_y が A と B にないようにしたい。<br>
  そのような組み合わせを 1 組出力せよ。
  
- 発想<br>
  A と B の各値を配列に入れる。<br>
  そのときに使われている整数を把握しておく。<br>
  あとは全部、順番に調べる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> num(1001);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      num[a[i]]++;
    }

    int m;
    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
      num[b[i]]++;
    }

    bool flg = false;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int c = a[i] + b[j];
        if (num[c] == 0) {
          cout << a[i] << " " << b[j] << endl;
          flg = true;
          break;
        }
      }
      if (flg) {
        break;
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

      int[] num = new int[1001];

      int n = sc.nextInt();
      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
        num[a[i]]++;
      }

      int m = sc.nextInt();
      int[] b = new int[m];
      for (int i = 0; i < m; i++) {
        b[i] = sc.nextInt();
        num[b[i]]++;
      }

      sc.close();

      boolean flg = false;

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          int c = a[i] + b[j];
          if (num[c] == 0) {
            System.out.println(a[i] + " " + b[j]);
            flg = true;
            break;
          }
        }
        if (flg) {
          break;
        }
      }

    }

  }
  ```
    