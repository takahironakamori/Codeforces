### Codeforces Round #347 (Div. 2)

# A. Complicated GCD

  [問題はこちら](https://codeforces.com/problemset/problem/664/A)
  
- 概要<br>
  a と b、2 つの整数が与えられる（a ≦ b)。<br>
  a, a + 1, a + 2, ..., b の最大公約数を出力せよ。<br>
  ただし、a と b の上限は 10 の 100 乗まであり得る。
  
- 発想<br>
  a = b の場合、a (または b) が最大公約数となる。<br>
  a < b の場合、a と a + 1 の最大公約数は 1 なので、どのような数値であっても最大公約数は 1 である。<br>
  以上より a と b は文字列で扱った方が楽。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string a, b;
    cin >> a >> b;

    if (a == b) {
      cout << a << endl;
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

      if (a.equals(b)) {
        System.out.println(a);
      } else {
        System.out.println(1);
      }

    }

  }
  ```
    