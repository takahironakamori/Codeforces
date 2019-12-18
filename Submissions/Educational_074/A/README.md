### Educational Codeforces Round 74 (Rated for Div. 2)

# A. Prime Subtraction

  [問題はこちら](https://codeforces.com/problemset/problem/1238/A)
  
- 概要<br>
  x と y （x > y）が t 回与えられる。<br>
  x から 任意の素数 p を何回か引いて y が作れる場合は YES を、<br>
  作れない場合は、 NO を出力せよ。
  
  
- 発想<br>
  x と y の差が 1 の場合は絶対に作れないので NO を出力する。<br>
  その他の場合は、必ず y にすることができるので、YES を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    while (0 < t) {

      long long x, y;
      cin >> x >> y;

      if ((x - y) == 1) {
        cout << "NO" << endl; 
      } else {
        cout << "YES" << endl; 
      }

      t--;

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

      while (0 < t) {
        long x = sc.nextLong();
        long y = sc.nextLong();
        if ((x - y) == 1) {
          System.out.println("NO"); 
        } else {
          System.out.println("YES"); 
        }
        t--;
      }

      sc.close();

    }

  }
  ```
    