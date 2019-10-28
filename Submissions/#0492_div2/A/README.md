### Codeforces Round #492 (Div. 2) 

# A. Hit the Lottery

  [問題はこちら](https://codeforces.com/problemset/problem/996/A)
  
- 概要<br>
  お金を n ドルある。<br>
  ドル紙幣は、100 ドル札、20 ドル札、10 ドル札、5 ドル札、1 ドル札 の 5 種類とする。<br>
  n ドルを最も少ない紙幣の枚数で受け取る場合は、紙幣は何枚か。
  
- 発想<br>
  n を 100、20、10、5 の順で商を求める。<br>
  余りをの紙幣で商を求めていく。<br>
  5 で割った余りはすべて 1 ドル札になるのでそのまま足す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    while (0 < n) {
      if (100 <= n) {
        answer += n / 100;
        n = n % 100;  
      } else if (20 <= n) {
        answer += n / 20;
        n = n % 20;
      } else if (10 <= n) {
        answer += n / 10;
        n = n % 10;
      } else if (5 <= n) {
        answer += n / 5;
        n = n % 5;
      } else {
        answer += n;
        n = 0;
      }

    }

    cout << answer << endl;

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

      int answer = 0;

      while (0 < n) {
        if (100 <= n) {
          answer += n / 100;
          n = n % 100;  
        } else if (20 <= n) {
          answer += n / 20;
          n = n % 20;
        } else if (10 <= n) {
          answer += n / 10;
          n = n % 10;
        } else if (5 <= n) {
          answer += n / 5;
          n = n % 5;
        } else {
          answer += n;
          n = 0;
        }

      }

      System.out.println(answer);

    }

  }
  ```
    