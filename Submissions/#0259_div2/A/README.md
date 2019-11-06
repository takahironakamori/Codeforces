### Codeforces Round #259 (Div. 2)

# A. Little Pony and Crystal Mine

  [問題はこちら](https://codeforces.com/problemset/problem/454/A)
  
- 概要<br>
  奇数 n が与えられる。<br>
  n * n のマトリクスでひし形になるように D と * を埋めた状態で出力せよ。<br>
  
  例 n = 3 のとき<br>
  ┏━┳━┳━┓<br>
  ┃＊┃Ｄ┃＊┃<br>
  ┣━╋━╋━┫<br>
  ┃Ｄ┃Ｄ┃Ｄ┃<br>
  ┣━╋━╋━┫<br>
  ┃＊┃Ｄ┃＊┃<br>
  ┗━┻━┻━┛<br>
  
  例 n = 5 のとき<br>
  ┏━┳━┳━┳━┳━┓<br>
  ┃＊┃＊┃Ｄ┃＊┃＊┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃＊┃Ｄ┃Ｄ┃Ｄ┃＊┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃Ｄ┃Ｄ┃Ｄ┃Ｄ┃Ｄ┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃＊┃Ｄ┃Ｄ┃Ｄ┃＊┃<br>
  ┣━╋━╋━╋━╋━┫<br>
  ┃＊┃＊┃Ｄ┃＊┃＊┃<br>
  ┗━┻━┻━┻━┻━┛<br>
  
  上記の例は、便宜上全角で表示しているが、問題では半角で出力する。
  
  
- 発想<br>
  まず、n の中央値を調べる。<br>
  
  行について、それぞれのマスがどれだけ中央から離れているのかを調べ、n からその値を引く（ l_i とする）。<br>
  
    例 n = 5 のとき<br>
    <br>
  　┏━┳━┳━┳━┳━┓<br>
  ０┃　┃　┃　┃　┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  １┃　┃　┃　┃　┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  ２┃　┃　┃　┃　┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  １┃　┃　┃　┃　┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  ０┃　┃　┃　┃　┃　┃<br>
  　┗━┻━┻━┻━┻━┛<br>
   
  列について、それぞれのマスがどれだけ中央値から離れているのかを調べ、その値が l_i 以下であれば "D" を出力し、
  l_i を超える場合は "*" を出力する。<br>
  
  例 n = 5 のとき<br>
  <br>
    　２　１　０　１　２
  　┏━┳━┳━┳━┳━┓<br>
  ０┃＊┃＊┃Ｄ┃＊┃＊┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  １┃＊┃Ｄ┃Ｄ┃Ｄ┃＊┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  ２┃Ｄ┃Ｄ┃Ｄ┃Ｄ┃Ｄ┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  １┃＊┃Ｄ┃Ｄ┃Ｄ┃＊┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  ０┃＊┃＊┃Ｄ┃＊┃＊┃<br>
  　┗━┻━┻━┻━┻━┛<br>
  
  
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
    