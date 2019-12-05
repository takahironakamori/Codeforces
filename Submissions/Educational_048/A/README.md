### Educational Codeforces Round 48 (Rated for Div. 2)

# A. Death Note

  [問題はこちら](https://codeforces.com/problemset/problem/1016/A)
  
- 概要<br>
  n 日間に渡ってノートに名前を書く。<br>
  i 日目には a_i 人分の名前を書く。<br>
  ノートには、m 人分の名前を書くことができる。<br>
  1 から n 日間の間、それぞれ何回ノートのページを変えたかを出力せよ。
  
  
- 発想<br>
  1 日目から n 日目まで、何人分の名前を書いたのか、何ページめくったのかを数える。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    long long current = 0;
    long long old = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      current += a;
      cout << current / m - old << " ";
      old = current / m;
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
      int m = sc.nextInt();

      long current = 0;
      long old = 0;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        current += a;
        System.out.print(current / m - old);
        System.out.print(" ");
        old = current / m;
      }

      sc.close();

      System.out.println("");

    }

  }
  ```
    