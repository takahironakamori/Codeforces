### Codeforces Round #572 (Div. 2)

# A. Keanu Reeves

  [問題はこちら](https://codeforces.com/problemset/problem/1189/A)
  
- 概要<br>
  0 と 1 で構成される n 文字の文字列 k が与えられる。<br>
  0 と 1 の数が異なる数字がいい番号と考える。<br>
  k を区切ることでいい番号を作ることができる場合に、その例を 1 つ出力せよ。

  
- 発想<br>
  0 と 1 の数を数える。<br>
  異なる場合は、すでにいい番号なので、k をそのまま出力する。<br>
  0 と 1 の数が同じ場合は、最初から 1 文字前までと最後の 1 文字の2つに分割する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string k;
    cin >> k;

    int count = 0;

    for (int i = 0; i < n; i++) {
      if (k[i] == '0') {
        count++;
      } else {
        count--;
      }
    }

    if (count == 0) {
      cout << 2 << endl;
      cout << k.substr(0, n - 1) << " " << k.substr(n - 1) << endl;
    } else {
      cout << 1 << endl;
      cout << k << endl;
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
      String K = sc.next();
      sc.close();

      String[] k = K.split("");

      int count = 0;

      for (int i = 0; i < n; i++) {
        if (k[i].equals("0")) {
          count++;
        } else {
          count--;
        }
      }

      if (count == 0) {
        System.out.println(2);
        System.out.println(K.substring(0, n - 1) + " " + K.substring(n - 1));
      } else {
        System.out.println(1);
        System.out.println(K);
      }

    }

  }
  ```
    