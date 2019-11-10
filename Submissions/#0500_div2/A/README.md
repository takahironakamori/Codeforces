### Codeforces Round #500 (Div. 2) [based on EJOI]

# A. Piles With Stones

  [問題はこちら](https://codeforces.com/problemset/problem/1013/A)
  
- 概要<br>
  n 個の山がある。<br>
  1 回目確認したとき、i 番目の山には、x_i 個の石がある。<br>
  2 回目確認したとき、i 番目の山には、y_i 個の石がある。<br>
  これらの山に含まれる石が減ることはあるが、増えることはない。<br>
  これらの確認について、間違いがないと考えられる場合は、YES を、間違いがあると考えらえる場合は NO を出力せよ。
  
- 発想<br>
  x_i の総和と y_i の総和を求め、y_i の方が多い場合は、石が増えているので、NO を出力する。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++) {
      int x_;
      cin >> x_;
      x += x_;
    }

    for (int i = 0; i < n; i++) {
      int y_;
      cin >> y_;
      y += y_;
    }

    if (y <= x) {
      cout << "YES" << endl;
    } else { 
      cout << "NO" << endl;
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

      int x = 0;
      int y = 0;

      for (int i = 0; i < n; i++) {
        x += sc.nextInt();
      }

      for (int i = 0; i < n; i++) {
        y += sc.nextInt();
      }
      sc.close();

      if (y <= x) {
        System.out.println("YES");
      } else { 
        System.out.println("NO");
      }

    }

  }
  ```
    