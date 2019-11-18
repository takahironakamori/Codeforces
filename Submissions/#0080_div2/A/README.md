### Codeforces Beta Round #80 (Div. 2 Only)

# A. Blackjack

  [問題はこちら](https://codeforces.com/problemset/problem/104/A)
  
- 概要<br>
  ブラックジャックをする。<br>
  トランプのカードは 52 枚。<br>
  1 は 1 または 11。<br>
  絵柄は 10。<br>
  2 から 9 は表示のまま。<br>
  1 枚目はスペードのクイーンだった。<br>
  2 枚の合計が、n になるパターンを出力せよ。
  
  
- 発想<br>
  n の状況でパターンの数は以下のように決まっている。<br>
  0 から 10 ： 0 パターン<br>
  11 ： 4 パターン（ 1 × 4 枚）<br>
  12 ： 4 パターン（ 2 × 4 枚）<br>
  13 ： 4 パターン（ 3 × 4 枚）<br>
  14 ： 4 パターン（ 4 × 4 枚）<br>
  15 ： 4 パターン（ 5 × 4 枚）<br>
  16 ： 4 パターン（ 6 × 4 枚）<br>
  17 ： 4 パターン（ 7 × 4 枚）<br>
  18 ： 4 パターン（ 8 × 4 枚）<br>
  19 ： 4 パターン（ 9 × 4 枚）<br>
  20 ： 15 パターン（ 10 × 4 枚、11 × 4枚、12 × 3枚、13 × ４枚）<br>
  21 ： 4 パターン（ 1 × 4 枚）<br>
  22 から 25 ： 0 パターン<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n < 11) {
      cout << 0 << endl;
    } else if (n < 20) {
      cout << 4 << endl;
    } else if (n < 21) {
      cout << 15 << endl;
    } else if (n < 22) {
      cout << 4 << endl;
    } else {
      cout << 0 << endl;
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
      sc.close();

      if (n < 11) {
        System.out.println(0);
      } else if (n < 20) {
        System.out.println(4);
      } else if (n < 21) {
        System.out.println(15);
      } else if (n < 22) {
        System.out.println(4);
      } else {
        System.out.println(0);
      }

    }

  }
  ```
    