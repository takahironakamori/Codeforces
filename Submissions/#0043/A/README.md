### School Personal Contest #2 (Winter Computer School 2010/11) - Codeforces Beta Round #43 (ACM-ICPC Rules)

# A. Ball Game

  [問題はこちら](https://codeforces.com/problemset/problem/46/A)
  
- 概要<br>
  ボールを渡すゲームをする。<br>
  例えば、10 人の人が円周上に並びます。<br>
  1 人目は、1 人隣の 2 人目にボールを渡します。<br>
  2 人目は、2 人隣の 4 人目にボールを渡します。<br>
  4 人目は、3 人隣の 7 人目にボールを渡します。<br>
  7 人目は、4 人隣の 1 人目にボールを渡します。<br>
  これを繰り返します。<br>
  整数 n が与えられるので、n - 1回目まで何人目の人にボールが渡ったのかを出力せよ。
  
  
- 発想<br>
  for 文で i を加えていく。<br>
  n を超えたら n を引く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int current = 1;

    for (int i = 1; i < n; i++) {
      current += i;
      if (n < current) {
        current = current - n;
      }
      cout << current << " ";
    }

    cout << endl;

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

      int current = 1;

      for (int i = 1; i < n; i++) {
        current += i;
        if (n < current) {
          current = current - n;
        }
        System.out.print(current + " ");
      }

      System.out.println("");

    }

  }
  ```
    