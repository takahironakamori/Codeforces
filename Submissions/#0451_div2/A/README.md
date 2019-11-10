### Codeforces Round #451 (Div. 2)

# A. Rounding

  [問題はこちら](https://codeforces.com/problemset/problem/898/A)
  
- 概要<br>
  整数 n が与えられる。<br>
  1 桁目が 0 の整数で n に最も近い数値を出力せよ。<br>
  ただし、n = 5 の場合は、0 でも 10　でも正しい。
  
- 発想<br>
  1 桁目の数値が 5 以下ならば n - 1桁目の数値を出力する。<br>
  それ以外の場合は、n に 10 - 1 桁目の数値を足したものを出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int r = n % 10;

    if (r <= 5){
      cout << n - r << endl;
    } else {
      cout << n + 10 - r << endl;
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

      int r = n % 10;

      if (r <= 5){
        System.out.println(n - r);
      } else {
        System.out.println(n + 10 - r);
      }

    }

  }
  ```
    