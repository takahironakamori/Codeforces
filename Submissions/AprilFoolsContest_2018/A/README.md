### April Fools Contest 2018

# A. Quirky Quantifiers

  [問題はこちら](https://codeforces.com/problemset/problem/952/A)
  
- 概要<br>
  問題文はない。<br>
  Examples を見るに、奇数の場合は 1、偶数の場合は 0 を出力している。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    cout << n % 2 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      System.out.println(n % 2);

    }

  }
  ```
    