### Educational Codeforces Round 34 (Rated for Div. 2)

# A. Hungry Student Problem

  [問題はこちら](https://codeforces.com/problemset/problem/903/A)
  
- 概要<br>
  3 個入りと 7 個入りのチキンが売っている。<br>
  チキンを x 個ちょうど買うことができるか。
   
  
- 発想<br>
  3 個入りと 7 個入りについて、 1 個から合計が100個を超えるまでの範囲に、<br>
  x があれば YES、なければ NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

      int x;
      cin >> x;

      bool flg = false;

      for (int j = 0; j < 100 / 3; j++) {
        for (int k = 0; k < 100 / 7; k++) {
          if ((3 * j) + (7 * k) == x) {
            flg = true;
          }
        }
        if (flg){
          break;
        }
      }

      if (flg) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
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

      int n = sc.nextInt();

      for (int i = 0; i < n; i++) {

        int x = sc.nextInt();

        boolean flg = false;

        for (int j = 0; j < 100 / 3; j++) {
          for (int k = 0; k < 100 / 7; k++) {
            if ((3 * j) + (7 * k) == x) {
              flg = true;
            }
          }
          if (flg){
            break;
          }
        }

        if (flg) {
          System.out.println("YES");
        } else {
          System.out.println("NO");
        }
      }

      sc.close();

    }

  }
  ```
    