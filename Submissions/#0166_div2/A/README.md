### Codeforces Round #166 (Div. 2)

# A. Beautiful Year

  [問題はこちら](https://codeforces.com/problemset/problem/271/A)
  
- 概要<br>
  1000 以上の 9000以下の y が与えられる。<br>
  y より大きくてすべての桁の数字が異なる 4 桁の数字のうち、y に最も近い数値を出力せよ。
  
- 発想<br>
  y + 1 から順番にすべての桁の数字が異なるかを確認する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int y;
    cin >> y;

    for (int i = y + 1; y < 9001; i++) {
      int y1 = i / 1000;
      int y2 = (i % 1000) / 100;
      int y3 = (i % 100) / 10;
      int y4 = i % 10;
      if (y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4) {
        cout << i << endl;
        break;
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int y = sc.nextInt();
      sc.close();

      for (int i = y + 1; y < 9001; i++) {
        int y1 = i / 1000;
        int y2 = (i % 1000) / 100;
        int y3 = (i % 100) / 10;
        int y4 = i % 10;
        if (y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4) {
          System.out.println(i);
          break;
        }
      }

    }

  }
  ```
    