### Codeforces Round #388 (Div. 2)

# A. Bachgold Problem

  [問題はこちら](https://codeforces.com/problemset/problem/749/A)
  
- 概要<br>
  n を 1 を超える素数でできる限り多い個数で分けたい。<br>
  素数に分けた回数とその内容を出力しなさい。<br>
  素数のパターンには複数パターンある場合はどれか 1 パターンでいい。
  
- 発想<br>
  できる限り多くの個数で分ける場合、最も小さい素数で分ける必要がある。<br>
  素数は 1 を超える必要があるので、最小の素数は 2 である。<br>
  n が偶数である場合は、n / 2 が素数で分けた個数になり、n / 2 回、2 を出力すればいい。<br>
  n が奇数の場合は、n / 2回のうち、1 回だけ 3 にすればいい。
  
  
- 実装のポイント<br>
  Java の場合、最大50000回ほど出力が呼ばれるので、PrintWriter()を使って出力した方がいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n % 2 == 0) {
      cout << n / 2 << endl;
      for (int i = 0; i < n / 2; i++) {
        cout << 2 << " ";
      }
      cout << endl;
    } else {
      cout << n / 2 << endl;
      for (int i = 0; i < n / 2 - 1; i++) {
        cout << 2 << " ";
      }
      cout << 3 << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;
  import java.io.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      PrintWriter out = new PrintWriter(System.out);

      if (n % 2 == 0) {
        out.println(n / 2);
        for (int i = 0; i < n / 2; i++) {
          out.print(2 + " ");
        }
        out.println("");
      } else {
        out.println(n / 2);
        for (int i = 0; i < n / 2 - 1; i++) {
          out.print(2 + " ");
        }
        out.println("3");
      }
      out.flush();

    }

  }
  ```
    