### Codeforces Beta Round #44 (Div. 2)

# A. Triangular numbers

  [問題はこちら](https://codeforces.com/problemset/problem/47/A)
  
- 概要<br>
  n が三角数の場合は YES 、異なる場合は NO を出力せよ。
  
- 発想<br>
  三角数とは、1,3,6,10,15... と 1 辺に n 個の正三角形になるように点を等間隔に並べたときの総数。<br>
  1 から x までの自然数の和と等しいので、n が 1 から x までの和で同じものがあるか否かで判定する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string answer = "NO";

    int i = 1;
    int sum = i;

    while (sum <= n) {
      if (sum == n) {
        answer = "YES";
        sum = n + 1;
      } else {
        i++;
        sum += i;
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

      String answer = "NO";

      int i = 1;
      int sum = i;

      while (sum <= n) {
        if (sum == n) {
          answer = "YES";
          sum = n + 1;
        } else {
          i++;
          sum += i;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    