### Rockethon 2015

# A. Game

  [問題はこちら](https://codeforces.com/problemset/problem/513/A)
  
- 概要<br>
  2 人でゲームする。<br>
  それぞれ箱にボールが入っている。<br>
  最初の人は n_1 個で、次の人は n_2 個ボールが入っている。<br>
  最初の人で箱から k_1 個のボールを出す。<br>
  次に次の人は箱に k_2 個のボールを入れる。<br>
  最初の人と次の人で逆の操作をする。<br>
  箱にボールが多く残っている方が勝ちである。<br>
  最初の人が勝つ場合は First を、次の人が勝つ場合は Second を出力せよ。
  
  
- 発想<br>
  最初のボールを多く持っている人が勝つ。  
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    if (n2 < n1) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n1 = sc.nextInt();
      int n2 = sc.nextInt();
      int k1 = sc.nextInt();
      int k2 = sc.nextInt();
      sc.close();

      if (n2 < n1) {
        System.out.println("First");
      } else {
        System.out.println("Second");
      }

    }

  }
  ```
    