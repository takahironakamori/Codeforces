### Codeforces Round #386 (Div. 2)

# A. Compote

  [問題はこちら](https://codeforces.com/problemset/problem/746/A)
  
- 概要<br>
  a 個のレモン、b 個のりんご、 c 個の洋梨を持っている。<br>
  これらを使って、できる限りたくさんコンポートを作りたい。<br>
  1 つのコンポートを作るには、1 個のレモン、2 個のりんご、 4 個の洋梨が必要である。<br>
  使用するレモン、りんご、洋梨の合計を出力せよ。
  
- 発想<br>
  a, b, c が 1:2:4 の比率を維持できる最大を求める。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int answer = 0;
    for (int i = 1; i <= 250; i++) {
      if (i <= a && (i * 2) <= b && (i * 4) <= c) {
        answer = i + i * 2 + i * 4;
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
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();
      sc.close();

      int answer = 0;
      for (int i = 1; i <= 250; i++) {
        if (i <= a && (i * 2) <= b && (i * 4) <= c) {
          answer = i + i * 2 + i * 4;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    