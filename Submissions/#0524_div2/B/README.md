### Codeforces Round #524 (Div. 2)

# B. Margarite and the best present

  [問題はこちら](https://codeforces.com/problemset/problem/1080/B)
  
- 概要<br>
  a_1 = -1<br>
  a_2 = 2<br>
  a_3 = -3<br>
  a_4 = 4<br>
  a_5 = -5<br>
  ...<bt>
  と続く数列がある。<br>
  開始の値 l と終了の値 r が q 回与えられる。<br>
  a_l から a_r までの合計を出力せよ。

  
- 発想<br>
  l = 1 r = 10 のときを考えると、<br>
  -1, 2, -3, 4, -5, 6, -7, 8, -9, 10<br>
  l が奇数なら l 一旦外して、rが偶数なら r を一旦外すと、
  (2, -3,) (4, -5,) (6, -7,) (8, -9)<br>
  と -1 の組み合わせが、4 個できる。<br>
  この個数は、l が奇数のときは、(r - l) / 2、<br>
  l が偶数のときは、(r - l + 1) / 2 で求めることができる。<br>
  この -1 * 個数に一旦外した数値を加えたものが回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      long long l, r;
      cin >> l >> r;

      long long answer = 0;

      if (l % 2 == 1) {
        answer = (r - l) / 2;
      } else {
        answer = (r - l + 1) / 2;
      }
      answer = 0 - answer;

      if (l % 2 == 1) {
        answer -= l;
      }

      if (r % 2 == 0) {
        answer += r;
      }

      cout << answer << endl;

    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      long q = sc.nextLong();

      for (int i = 0; i < q; i++) {

        long l = sc.nextLong();
        long r = sc.nextLong();

        long answer = 0;

        if (l % 2 == 1) {
          answer = (r - l) / 2;
        } else {
          answer = (r - l + 1) / 2;
        }

        answer = 0 - answer;

        if (l % 2 == 1) {
          answer -= l;
        }

        if (r % 2 == 0) {
          answer += r;
        }

        System.out.println(answer);

      }

      sc.close();

    }

  }
  ```
    