### Good Bye 2018

# A. New Year and the Christmas Ornament

  [問題はこちら](https://codeforces.com/problemset/problem/1091/A)
  
- 概要<br>
  yellow の飾りが y 個、blue の飾りが b 個、red の飾りが r 個あり、それらを使ってクリスマスツリーを飾る。<br>
  その際、以下の条件を満たす個数で飾りたい。<br>
  ・yellow の飾りの個数 + 1 = blue の飾りの個数<br>
  ・blue の飾りの個数 + 1 = red の飾りの個数<br>
  合計で最大何個飾りに使うことができるか。
  
  
- 発想<br>
  
  【解法1】<br>
  yellow の値を 1 から 98 まで順番に試す。（Javaのコード）<br>
  【解法2】<br>
  min(y + 2, min(b + 1, r)) が red の個数となる。（C++のコード）


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int y, b, r;
    cin >> y >> b >> r;

    int answer = min(y + 2, min(b + 1, r));

    cout << answer * 3 - 3 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int y = sc.nextInt();
      int b = sc.nextInt();
      int r = sc.nextInt();
      sc.close();

      int answer = 0;

      for (int i = 1; i <= 98; i++) {
        if (i <= y && (i + 1) <= b && (i + 2) <= r) {
          answer = i;
        }
      }

      System.out.println(answer * 3 + 3);

    }

  }
  ```
    