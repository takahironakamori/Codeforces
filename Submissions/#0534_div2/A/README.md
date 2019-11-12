### Codeforces Round #534 (Div. 2)

# A. Splitting into digits

  [問題はこちら](https://codeforces.com/problemset/problem/1104/A)
  
- 概要<br>
  整数 n が与えられる。<br>
  以下の条件を満たす d を算出したい。<br>
  ・d は 1 以上、9 以下である。<br>
  ・d_1 + d_2 + d_3 ... d_k = n となる。<br>
  複数ある場合はどれか 1 パターン出力せよ。

  
- 発想<br>
  1 を n 回出力すればいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    cout << n << endl;
    for (int i = 0; i < n; i++) {
      cout << 1 << " ";
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
      sc.close();

      System.out.println(n);

      for (int i = 0; i < n; i++) {
        System.out.print(1 + " ");
      }
      System.out.println("");

    }

  }
  ```
    