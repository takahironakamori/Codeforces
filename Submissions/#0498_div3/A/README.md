### Codeforces Round #498 (Div. 3)

# A. Adjacent Replacements

  [問題はこちら](https://codeforces.com/problemset/problem/1006/A)
  
- 概要<br>
  整数が n 文字ならんでいる。<br>
  i番目の値は a_i である。<br>
  以下のルールで a_i を入れ替える。<br>
  ・1 は 2 へ。<br>
  ・2 は 1 へ。<br>
  ・3 は 4 へ。<br>
  ・4 は 3 へ。<br>
  ・10^9 - 1 は 10^9 へ。<br>
  ・10^9 は 10^9 - 1 へ。<br>
  これらの作業をできる限りする。<br>
  最終的に n はどうなるか出力せよ。
  
- 発想<br>
  a_i が奇数の場合はそのまま。<br>
  a_i が偶数の場合は a_i - 1 となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a % 2 == 0) {
        cout << a - 1 << " ";   
      } else {
        cout << a << " ";
      }
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

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (a % 2 == 0) {
          System.out.print(a - 1 + " ");
        } else {
          System.out.print(a + " ");
        }
      }

      System.out.println("");

      sc.close();

    }

  }
  ```
    