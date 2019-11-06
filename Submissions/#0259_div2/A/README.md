### Codeforces Round #259 (Div. 2)

# A. Little Pony and Crystal Mine

  [問題はこちら](https://codeforces.com/problemset/problem/454/A)
  
- 概要<br>
  奇数 n が与えられる。<br>
  n * n のマトリクスでひし形になるように D と * を埋めたい。<br>
  
  例<br>
  ┏━┳━┳━┓<br>
  ┃＊┃Ｄ┃＊┃<br>
  ┣━╋━╋━┫<br>
  ┃Ｄ┃Ｄ┃Ｄ┃<br>
  ┣━╋━╋━┫<br>
  ┃＊┃Ｄ┃＊┃<br>
  ┗━┻━┻━┛<br>
  
- 発想<br>
  
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int s;
    cin >> s;

    int c = s / 2;

    for (int i = 0; i < s; i++) {
      for (int j = 0; j < s; j++) {
        int d = c - abs(i - c);
        if (abs(j - c) <= d) {
          cout << "D";
        } else {
          cout << "*";
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
      int s = sc.nextInt();
      sc.close();

      int c = s / 2;

      for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
          int d = c - Math.abs(i - c);
          if (Math.abs(j - c) <= d) {
            System.out.print("D");
          } else {
            System.out.print("*");
          }
        }
        System.out.println("");
      }

    }

  }
  ```
    