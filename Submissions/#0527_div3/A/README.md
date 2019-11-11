### Codeforces Round #527 (Div. 3)

# A. Uniform String

  [問題はこちら](https://codeforces.com/problemset/problem/1092/A)
  
- 概要<br>
  整数 n, k が与えられる。<br>
  n 出力しなければならならない文字列の数である。<br>
  k は 1 から k 番目までのアルファベット（ A を 1 番目とする）を必ず出力しなければならないことを示す。<br>
  上記の条件を満たす文字列を 1 つ出力せよ。<br>
  また、t 個クエリが与えれる。

  
- 発想<br>
  生徒のプログラミングスキルを並び替え、i 番目と i + 1 番目をグループにすると差が最も少なくなる。<br>
  あとは差を集計する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      int n, k;
      cin >> n >> k;
      int current = 0;
      for (int j = 0; j < n; j++) {
        cout << char(97 + current);
        if (k - 1 == current) {
          current = 0;
        } else {
          current++;
        }
      }
      cout << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();

      for (int i = 0; i < t; i++) {
        int n = sc.nextInt();
        int k = sc.nextInt();
        int current = 0;
        for (int j = 0; j < n; j++) {
          System.out.print(Character.toChars((97 + current)));
          if (k - 1 == current) {
            current = 0;
          } else {
            current++;
          }
        }
        System.out.println("");
      }

      sc.close();

    }

  }
  ```
    