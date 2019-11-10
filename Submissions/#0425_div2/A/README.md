### Codeforces Round #425 (Div. 2)

# A. Sasha and Sticks

  [問題はこちら](https://codeforces.com/problemset/problem/832/A)
  
- 概要<br>
  Sasha と Lena で、2 人でゲームをする。<br>
  先攻は Sasha で、まず n 本の棒を並べる。<br>
  続いて、Sasha は k 本の棒を取る。<br>
  後攻の Lena も 残った棒から k 本の棒を取る。<br>
  これを繰り返し、棒を取った時点でこれ以上 k 本の棒を取ることができないようにした方が勝ち。<br>
  Sasha が勝つことができる場合は、 YES を、負ける場合は NO を出力せよ。
  
- 発想<br>
  n / k して結果が奇数の場合は YES を偶数の場合は NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long n, k;
    cin >> n >> k;

    long long allTurn = n / k;

    if (allTurn % 2 == 1) {
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
      long n = sc.nextLong();
      long k = sc.nextLong();
      sc.close();

      long allTurn = n / k;

      if (allTurn % 2 == 1) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    