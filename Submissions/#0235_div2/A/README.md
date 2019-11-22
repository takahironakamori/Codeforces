### Codeforces Round #235 (Div. 2)

# A. Vanya and Cards

  [問題はこちら](https://codeforces.com/problemset/problem/401/A)
  
- 概要<br>
  カードが何枚かある。<br>
  カードには、正負問わず x 以下の整数が書かれている。<br>
  また、カードには、ある正の数があれば、同じ絶対値である負の数もある。<br>
  例えば、1 のカードの枚数と -1 のカードの枚数は同じである。<br>
  n のカードを拾った。<br>
  拾ったカードの合計を 0 にするには最低何枚のカードを見つける必要があるか。
  
  
- 発想<br>
  拾ったカードの合計を計算する。<br>
  マイナスの場合はプラスにする。<br>
  合計 / x を切り上げで計算した結果が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, x;
    cin >> n >> x;

    int sum = 0;
    for (int i = 0; i < n; i++) {
      int c;
      cin >> c;
      sum += c;
    }

    sum = abs(sum);

    cout << ceil((double)sum / x) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int x = sc.nextInt();

      int sum = 0;
      for (int i = 0; i < n; i++) {
        int c = sc.nextInt();
        sum += c;
      }
      sc.close();

      sum = Math.abs(sum);

      System.out.println((int) Math.ceil((double)sum / x));

    }

  }
  ```
    