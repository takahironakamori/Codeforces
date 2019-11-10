### ICM Technex 2018 and Codeforces Round #463 (Div. 1 + Div. 2, combined)

# A. Palindromic Supersequence

  [問題はこちら](https://codeforces.com/problemset/problem/932/A)
  
- 概要<br>
  文字列 A が与えられる。<br>
  A 使って次の条件を満たす文字列 B を作りたい。<br>
  文字列 B には、文字列 A が含まれていること。<br>
  contest と cotst のように並び順を満たすが、間に文字が入るのはいい。<br>
  文字列 B は回文であること。<br>
  最も短い文字列である必要はない、B は 10^4 までに収めること。
  
- 発想<br>
  文字列 A に A を逆にしたものを加えればいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string a;
    cin >> a;

    cout << a;

    reverse(a.begin(), a.end());

    cout << a << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String A = sc.next();
      sc.close();

      String[] a = A.split("");

      for (int i = 0; i < a.length; i++) {
        System.out.print(a[i]);
      }

      for (int i = a.length - 1; 0 <= i; i--) {
        System.out.print(a[i]);
      }

      System.out.println("");

    }

  }
  ```
    