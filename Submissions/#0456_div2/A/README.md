### Codeforces Round #456 (Div. 2)

# A. Tricky Alchemy

  [問題はこちら](https://codeforces.com/problemset/problem/912/A)
  
- 概要<br>
  yellow、green、blue のボールを作りたい。<br>
  yellow のボールを 1 個作るには、yellow のクリスタルが 2 個必要。<br>
  green のボールを 1 個作るには、yellow のクリスタルが 1 個、blue のクリスタルが 1 個必要。<br>
  blue のボールを 1 個作るには、blue のクリスタルが 3 個必要。<br>
  yellow のクリスタルの数、blue のクリスタルの数、作りたい yellow、green、blue のボールの数が与えられる。<br>
  すべてのボールを作るために、不足しているクリスタルの数を出力せよ。
  
  
- 発想<br>
  必要な yellow のクリスタルと blue のクリスタルを計算し、不足しているか否かを判断する。
   
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long A, B, yellow, green, blue;
    cin >> A >> B >> yellow >> green >> blue;

    long long yellowcystals = yellow * 2 + green;
    long long bluecystals = blue * 3 + green;

    long long answer = 0;

    if (0 < yellowcystals - A) {
      answer = yellowcystals - A;
    }

    if (0 < bluecystals - B) {
      answer += bluecystals - B;
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

      long A = sc.nextLong();
      long B = sc.nextLong();
      long yellow = sc.nextLong();
      long green = sc.nextLong();
      long blue = sc.nextLong();
      sc.close();

      long yellowcystals = yellow * 2 + green;
      long bluecystals = blue * 3 + green;

      long answer = 0;

      if (0 < yellowcystals - A) {
        answer = yellowcystals - A;
      }

      if (0 < bluecystals - B) {
        answer += bluecystals - B;
      }

      System.out.println(answer);

    }

  }
  ```
    