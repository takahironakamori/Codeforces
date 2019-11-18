### Codeforces Beta Round #85 (Div. 2 Only)

# A. Petya and Strings

  [問題はこちら](https://codeforces.com/problemset/problem/112/A)
  
- 概要<br>
  同じ長さのアルファベットの文字列が 2 つ与えられる。<br>
  大文字と小文字を加味せずに辞書順で比較をする。<br>
  1 つ目の文字列が前の場合は、1 を、<br>
  2 つ目の文字列が前の場合は、-1 を、<br>
  文字列が同じ場合は、0 を出力せよ。
  
- 発想<br>
  文字列を大文字か小文字に統一して比較する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string a, b;
    cin >> a >> b;

    string A, B;

    for (int i = 0; i < a.size(); i++) {
      int a_ = (int) a[i];
      int b_ = (int) b[i];
      if (a_ <= 90) {
        A += char(a_ + 32);
      } else {
        A += char(a_);
      }
      if (b_ <= 90) {
        B += char(b_ + 32);
      } else {
        B += char(b_);
      }
    }

    if (A == B) {
      cout << 0 << endl;
    } else if (A < B) {
      cout << -1 << endl;
    } else {
      cout << 1 << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String a = sc.next();
      String b = sc.next();
      sc.close();

      String A = a.toUpperCase();
      String B = b.toUpperCase();

      if (A.compareTo(B) == 0) {
        System.out.println(0);
      } else if (A.compareTo(B) < 0) {
        System.out.println(-1);
      } else {
        System.out.println(1);
      }

    }

  }
  ```
    