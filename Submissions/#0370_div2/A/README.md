### Codeforces Round #370 (Div. 2)

# A. Memory and Crow

  [問題はこちら](https://codeforces.com/problemset/problem/712/A)
  
- 概要<br>
  n 個の整数の数列 b がある。<br>
  1 番目は b_1 で、n 番目は b_n である。<br>
  これらの整数を使って、n 個の数列 a を作る。<br>
  a_i = b_i - b_{i+1} + b_{i+2} - b_{i+3}...とする。<br>
  n 個の数列 a が与えらえるので、数列 b を出力せよ。
  
- 発想<br>
  b_1 = a_1 + a_2、すなわち、<br>
  b_i = a_i + a_i+1 で求めることができる。<br>
  数列の最後の値は、a と同じ。<br>
  すなわち、a_n = b_n
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
      cout << a[i] + a[i+1] << " ";
    }

    cout << a[n - 1] << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      for (int i = 0; i < n - 1; i++) {
        System.out.print(a[i] + a[i+1] + " ");
      }

      System.out.println(a[n - 1]);

    }

  }
  ```
    