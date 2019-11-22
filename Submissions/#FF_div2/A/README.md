### Codeforces Round #FF (Div. 2)

# A. DZY Loves Hash

  [問題はこちら](https://codeforces.com/problemset/problem/447/A)
  
- 概要<br>
  0 から p - 1 までの p 個の配列がある。<br>
  n 個の整数が与えられる。<br>
  i 番目の整数は、x_i である。<br>
  順番に、配列の x_i mod p 番目に 番号を入れる。<br>
  すでに配列の要素に番号が入っている場合は、衝突が発生する。<br>
  衝突が発生するのは、何番目か。<br>
  衝突が起きない場合は、-1 を出力よせ。
  
- 発想<br>
  配列を -1 で初期化する。<br>
  n について、順番に、x % p 番目の適当な正の整数を入れておく。<br>
  x % p が -1 ではない場合は、衝突なので、その時の番号を出力する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int p, n;
    cin >> p >> n;

    int answer = -1;

    vector<int> h(p);

    fill(h.begin(), h.end(), -1);

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (h[x % p] == x % p) {
        if (answer == -1) {
          answer = i + 1;
        }
      } else {
        h[x % p] = x % p;
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
      int p = sc.nextInt();
      int n = sc.nextInt();

      int answer = -1;

      int[] h = new int[p];

      Arrays.fill(h, -1);

      for (int i = 0; i < n; i++) {
        int x = sc.nextInt();
        if (h[x % p] == x % p) {
          if (answer == -1) {
            answer = i + 1;
          }
        } else {
          h[x % p] = x % p;
        }
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    