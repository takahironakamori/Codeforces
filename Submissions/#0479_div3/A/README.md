### Codeforces Round #479 (Div. 3)

# A. Wrong Subtraction

  [問題はこちら](https://codeforces.com/contest/977/problem/A)
  
- 概要<br>
  n について以下の処理を k 回した結果を出力せよ。<br>
  ・下 1 桁が 0 以外の場合：1 引く<br>
  ・下 1 桁が 0 の場合：10 で割る
  
- 発想<br>
  n について、10 で割り切れる場合は 10 で割り、<br>
  10 で割り切れない場合は、1 引く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {

      if (n % 10 == 0) {
        n /= 10;
      } else {
        n--;
      }

    }

    cout << n << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int k = sc.nextInt();
      sc.close();

      for (int i = 0; i < k; i++) {

        if (n % 10 == 0) {
          n /= 10;
        } else {
          n--;
        }

      }

      System.out.println(n);

    }

  }
  ```
    