### Codeforces Round #290 (Div. 2)

# A. Fox And Snake

  [問題はこちら](https://codeforces.com/problemset/problem/510/A)
  
- 概要<br>
  n * m のマス目がある。<br>
  下図のように蛇みたいに "#" と "." を使ってマス目を出力せよ。<br>
  n = 5、m = 5 の場合<br>
  ┏━┳━┳━┳━┳━┓<br>
  ┃＃┃＃┃＃┃＃┃＃┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃．┃．┃．┃．┃＃┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃＃┃＃┃＃┃＃┃＃┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃＃┃．┃．┃．┃．┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃＃┃＃┃＃┃＃┃＃┃<br>
  ┗━┻━┻━┻━┻━┛<br>
  ※ 便宜上全角で表示していますが、問題は半角で解く。
  
  
- 発想<br>
  0行目と偶数行目はすべて "#" を出力する。<br>
  奇数行で、i行目 + 1 が 4 で割り切れるときは右端に、<br>
  奇数行で、i行目 + 1 が 4 で割り切れないときは左端に、"." を出力する。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if (i % 2 == 0) {
          cout << "#";
        } else {
          if ((i + 1) % 4 == 0 && j == 0) {
            cout << "#";
          } else if ((i + 1) % 4 != 0 && j == m - 1) {
            cout << "#";
          } else {
            cout << ".";
          }
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
      int n = sc.nextInt();
      int m = sc.nextInt();
      sc.close();

      for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if (i % 2 == 0) {
            System.out.print("#");
          } else {
            if ((i + 1) % 4 == 0 && j == 0) {
              System.out.print("#");
            } else if ((i + 1) % 4 != 0 && j == m - 1) {
              System.out.print("#");
            } else {
              System.out.print(".");
            }
          }
        }
        System.out.println("");
      }

    }

  }
  ```
    