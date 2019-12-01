### Codeforces Round #469 (Div. 2)

# A. Left-handers, Right-handers and Ambidexters

  [問題はこちら](https://codeforces.com/problemset/problem/950/A)
  
- 概要<br>
  左利きの人が l 人、右利きの人が r 人、両利きの人が a 人いる。<br>
  偶数人のチームを作りたい。<br>
  その際、チーム内の左利きの人と右利きの人を同じにしたい。<br>
  両利きの人は都合のいい方の数に入れる。<br>
  作ることができるチームの最大人数は何人か。
  
- 発想<br>
  全てのパターンを試す（Javaのコード）。<br>
  <br>
  l と r で小さい方 + a が l と r で大きい方より小さい場合は、<br>
  (小さい方 + a) * 2 が回答となる。<br>
  l と r で小さい方 + a が l と r で大きい方より大きい場合は、<br>
  (l + r + a) / 2 * 2 が回答となる。（C++のコード）<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int l, r, a;
    cin >> l >> r >> a;

    int answer = 0;

    if (r < l) {
      swap(l,r);
    }

    if (l + a <= r) {
      answer = (l + a) * 2;
    } else {
      answer = (l + r + a) / 2 * 2;
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

      int l = sc.nextInt();
      int r = sc.nextInt();
      int a = sc.nextInt();

      sc.close();

      int answer = 0;

      for (int i = 0; i <= a; i++){
        for (int j = 0; j <= a; j++) {
          if (i + j <= a) {
            int l2 = l + i;
            int r2 = r + j;
            if (l2 == r2) {
              answer = Math.max(answer, l2 + r2);
            } else {
              int d = Math.abs(l2 - r2);
              answer = Math.max(answer, l2 + r2 - d);
            }
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    