### Codeforces Beta Round #55 (Div. 2)

# A. Word

  [問題はこちら](https://codeforces.com/problemset/problem/59/A)
  
- 概要<br>
  すべてアルファベットで構成されている文字列 s が与えられる。<br>
  文字列の中で大文字が多い場合はすべて大文字に変換し、<br>
  小文字が多い、または大文字と小文字の数が同じ場合はすべて小文字に変換して出力せよ。
  
  
- 発想<br>
  大文字を小文字に、小文字を大文字に変化する方法は、言語が用意している関数を使っても良いし、<br>
  ASCIIコードを番号を利用する（大文字と小文字の差は32）。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    string u = "";
    string l = "";

    int ucount = 0;

    for (int i = 0; i < s.size(); i++) {
      int v = (int) s[i];
      if (v <= 90) {
        ucount++;
        u += char(v);
        l += char(v + 32);
      } else {
        u += char(v - 32);
        l += char(v);
      }
    }

    if (ucount <= s.size() / 2) {
      cout << l << endl;
    } else {
      cout << u << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();
      String u = S.toUpperCase();
      String l = S.toLowerCase();

      int ucount = 0;

      for (int i = 0; i < s.length; i++) {
        int v = (int) s[i];
        if (v <= 90) {
          ucount++;
        }
      }

      if (ucount <= s.length / 2) {
        System.out.println(l);
      } else {
        System.out.println(u);
      }

    }

  }
  ```
    