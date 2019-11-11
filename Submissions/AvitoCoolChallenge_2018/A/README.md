### Avito Cool Challenge 2018

# A. Definite Game
  
  [問題はこちら](https://codeforces.com/problemset/problem/1081/A)
  
- 概要<br>
  以下のようなゲームを行う。<br>
  正の整数 n が与えられる。<br>
  n より小さく、n の除数でない x を選ぶ。<br>
  n を x から引く。<br>
  n の値を最小にすることがゴールとなる。ゴール時の値を出力せよ。
  
  
- 発想<br>
  n が 2 の場合、選択肢がなくなるので、2 で終了する。<br>
  それ以外の場合は、1 で終了する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n == 2) {
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
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

      if (n == 2) {
        System.out.println(2);
      } else {
        System.out.println(1);
      }

    }

  }
  ```
    