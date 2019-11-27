### Tinkoff Challenge - Final Round (Codeforces Round #414, rated, Div. 1 + Div. 2)

# A. Bank Robbery

  [問題はこちら](https://codeforces.com/problemset/problem/794/A)
  
- 概要<br>
  泥棒が入り、金庫がすべて開けられたが、幸いにも盗まれなかった。<br>
  しかし、銀行員 Oleg の一人がお金を盗もうと考えた。<br>
  n 個の金庫があり、Oleg は a の位置の金庫にいる。<br>
  二人の警備員が b と c の位置にいる。<br>
  紙幣が、x_i の金庫に入っている。<br>
  Oleg は、警備員に見つからないように最大何個の金庫を開けることができるか。
  
- 発想<br>
  b < x_i かつ x_i < c を満たす場合に、1 加える。
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (b < x && x < c) {
        answer++;
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
      int n = sc.nextInt();

      int answer = 0;

      for (int i = 0; i < n; i++) {
        int x = sc.nextInt();
        if (b < x && x < c) {
          answer++;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    