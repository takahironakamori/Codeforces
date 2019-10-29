### Codeforces Round #365 (Div. 2)

# A. Mishka and Game

  [問題はこちら](https://codeforces.com/problemset/problem/703/A)
  
- 概要<br>
  Mishka と Chris でサイコロを使ったゲームをする。<br>
  ルールはシンプルにサイコロをふって出たマス目が勝ち。<br>
  n 回やって勝った回数が多かった方がゲームの勝者。<br>
  勝った方の名前を出力せよ。<br>
  引き分けの場合は、Friendship is magic!^^ と出力せよ。
  
- 発想<br>
  m_i と c_i で比較して、勝った方の回数を n 回分集計する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int m = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      if (a != b) {
        if (a < b) {
          c++;
        } else {
          m++;
        }
      }
    }

    if (m == c) {
      cout << "Friendship is magic!^^" << endl;
    } else if (c < m) {
      cout << "Mishka" << endl; 
    } else {
      cout << "Chris" << endl;
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
      int m = 0;
      int c = 0;
      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        int b = sc.nextInt();
        if (a != b) {
          if (a < b) {
            c++;
          } else {
            m++;
          }
        }
      }
      sc.close();

      if (m == c) {
        System.out.println("Friendship is magic!^^");
      } else if (c < m) {
        System.out.println("Mishka"); 
      } else {
        System.out.println("Chris");
      }

    }

  }
  ```
    