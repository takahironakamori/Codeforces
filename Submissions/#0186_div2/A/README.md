### Codeforces Round #186 (Div. 2)

# A. Ilya and Bank Account

  [問題はこちら](https://codeforces.com/problemset/problem/313/A)
  
- 概要<br>
  整数 n が与えられる。<br>
  n について、以下のいずれかを選択することができる。<br>
  ・ n そのまま。<br>
  ・最も小さい桁から 1 桁目を削る。（例-123 -> -12）<br>
  ・最も小さい桁から 2 桁目を削る。（例-13 -> -13）<br>
  最も大きい値を選択するとき、選択後の数値はいくつか。
  
  
- 発想<br>
  0 < n のときは、n そのままが最大値。<br>
  n < 0 のときは、以下のうちどちらか大きい方が最大値。<br>
  ・10 で割った値<br>
  ・n から 2桁目の値を削った値
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (0 <= n) {
      cout << n << endl;
    } else {
      int a1 = n / 10;
      a1 = a1 - (a1 % 10) + (n % 10);
      int a2 = n / 10;
      cout << max(a1, a2) << endl;
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
      sc.close();

      if (0 <= n) {
        System.out.println(n);
      } else {
        int a1 = n / 10;
        a1 = a1 - (a1 % 10) + (n % 10);
        int a2 = n / 10;
        System.out.println(Math.max(a1, a2));
      }

    }

  }
  ```
    