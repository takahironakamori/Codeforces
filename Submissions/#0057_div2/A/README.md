### Codeforces Beta Round #57 (Div. 2)

# A. Ultra-Fast Mathematician

  [問題はこちら](https://codeforces.com/problemset/problem/61/A)
  
- 概要<br>
  同じ桁数の 2 進数が 2 つ与えられるので、それぞれの桁でどちらかが 1 の場合は 1 となり、それ以外の場合は 0 となる 2 進数を出力せよ。
  
  
- 発想<br>
  XOR 演算する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string f, s;
    cin >> f >> s;

    for (int i = 0; i < f.size(); i++) {
      int answer = f[i] ^ s[i];
      cout << answer;
    }

    cout  << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String F = sc.next();
      String S = sc.next();
      sc.close();

      String[] f = F.split("");
      String[] s = S.split("");

      for (int i = 0; i < f.length; i++) {
        int answer = Integer.valueOf(f[i]) ^ Integer.valueOf(s[i]);
        System.out.print(answer);
      }

      System.out.println("");

    }

  }
  ```
    