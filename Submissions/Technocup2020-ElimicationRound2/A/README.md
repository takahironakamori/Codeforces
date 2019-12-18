### Technocup 2020 - Elimination Round 2

# A. Forgetting Things

  [問題はこちら](https://codeforces.com/problemset/problem/1225/A)
  
- 概要<br>
  a + 1 = b について、間違えて a の最初の 1 桁目を d_a として、b の最初の 1 桁目を d_b として覚えてしまっていた。<br>
  例えば、123 であれば 1、5 であれば 5 となる。<br>
  d_a、d_b が与えられるので、もとの a と b を推測せよ。<br>
  複数考えられる場合は、1 組だけ出力せよ。<br>
  また、a と b を推測することができない場合は、-1 を出力せよ。
  
  
- 発想<br>
  d_a と d_b が同じ場合は、a は d_a * 10、b は d_b *10 + 1 となる。<br>
  d_a > d_b または d_a と d_b の差の絶対値が2以上の場合は、<br>
  d_a が 9、かつ d_b が 1 であれば、a は 9、b は 10 となるが、<br>
  その他の場合は、-1 となる。<br>
  上記以外の場合は、d_a と d_b をそのまま出力すればいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int d1, d2;
    cin >> d1 >> d2;

    if (d1 == d2) {
      cout << d1 * 10 << " " << d1 * 10 + 1 << endl;  
    } else if (d2 < d1 || 1 < abs(d2 - d1)) {
      if (d1 == 9 && d2 == 1) {
        cout << 9 << " " << 10 << endl; 
      } else {
        cout << -1 << endl;
      } 
    } else {
      cout << d1 << " " << d2 << endl; 
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int d1 = sc.nextInt();
      int d2 = sc.nextInt();

      sc.close();

      if (d1 == d2) {
        System.out.print(d1 * 10);
        System.out.print(" ");
        System.out.println(d1 * 10 + 1);  
      } else if (d2 < d1 || 1 < Math.abs(d2 - d1)) {
        if (d1 == 9 && d2 == 1) {
          System.out.println(9 + " " + 10); 
        } else {
          System.out.println(-1); 
        } 
      } else {
        System.out.println(d1 + " " + d2);
      }

    }

  }
  ```
    