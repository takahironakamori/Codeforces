### Codeforces Round #569 (Div.2)

# A. Alex and a Rhombus

  [問題はこちら](https://codeforces.com/problemset/problem/1180/A)
  
- 概要<br>
  整数 n が与えられる。<br>
  マス目上に n が上下左右で中央になるような菱形を作りたい。<br>
  
  例 n = 2 のとき<br>
  　　┏━┓<br>
  　　┃　┃<br>
  ┏━╋━╋━┓<br>
  ┃　┃　┃　┃<br>
  ┗━╋━╋━┛<br>
  　　┃　┃<br>
  　　┗━┛<br>
    
  菱形を作るのに必要なマス目の数を出力せよ。<br>
  
  
- 発想<br>
  菱形の幅（=高さ）は n * 2 - 1 である。<br>
  0から始まる中央値 c は n - 1 となる。<br>

  行について、それぞれのマスがどれだけ中央から離れているのかを調べ、c からその値を引く（ l_i とする）。<br>

  例 n = 3 のとき<br>
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

  列について、それぞれのマスがどれだけ中央値から離れているのかを調べ、その値が l_i 以下（◯の位置）であればマス目の数に加える。<br>

  例 n = 3 のとき<br>
  　　２　１　０　１　２<br>
  　┏━┳━┳━┳━┳━┓<br>
  ０┃　┃　┃◯┃　┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  １┃　┃◯┃◯┃◯┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  ２┃◯┃◯┃◯┃◯┃◯┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  １┃　┃◯┃◯┃◯┃　┃<br>
  　┣━╋━╋━╋━╋━┫<br>
  ０┃　┃　┃◯┃　┃　┃<br>
  　┗━┻━┻━┻━┻━┛
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    int w = n * 2 - 1;

    n = n - 1;

    for (int i = 0; i < w; i++) {
      for (int j = 0; j < w; j++) {
        int d = n - abs(i - n);
        if (abs(j - n) <= d) {
          answer++;
        }
      }
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
      sc.close();

      int answer = 0;

      int w = n * 2 - 1;

      n = n - 1;

      for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++) {
          int d = n - Math.abs(i - n);
          if (Math.abs(j - n) <= d) {
            answer++;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    