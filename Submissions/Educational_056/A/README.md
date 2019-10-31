### Educational Codeforces Round 56 (Rated for Div. 2)

# A. Dice Rolling

  [問題はこちら](https://codeforces.com/problemset/problem/1093/A)
  
- 概要<br>
  2 から 7 までの数字が書かれている 6 面のさいころがある。<br>
  t 個の値が与えられる。<br>
  i 番目の値は、x_i である。<br>
  これらの値になるにはサイコロを何回降る必要があるか。<br>
  必ず答えはあるので、どのようなパターンでもいい。
  
- 発想<br>
  x_i / 2 でいい。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      int x;
      cin >> x;
      cout << x / 2 << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();

      for (int i = 0; i < t; i++) {
        int x = sc.nextInt();
        System.out.println(x / 2);
      }

      sc.close();

    }

  }
  ```
    