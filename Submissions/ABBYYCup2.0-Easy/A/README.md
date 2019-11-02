### ABBYY Cup 2.0 - Easy

# A1. Good Matrix Elements
  
  [問題はこちら](https://codeforces.com/problemset/problem/177/A1)
   
# A2. Good Matrix Elements

  [問題はこちら](https://codeforces.com/problemset/problem/177/A2)
  
- 概要<br>
  n * n のマトリクスがある。<br>
  n は必ず奇数である。<br>
  以下の条件を満たすマスは良いマスである。<br>
  ・2本の対角線上にあるマス<br>
  ・縦、横中央にあるマス<br>
  n * n の各マス上の数字が与えれるので、良いマス上にある数字の合計を出力せよ。<br>
  A1 と A2 の違いは n の大きさ。
  
- 発想<br>
  縦、横中央は n / 2 で計算。<br>
  対角線上は i == j か i == n - 1 - j のどちらかを満たす場合。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int v;
    int answer = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> v;
        if (i == n / 2 || j == n / 2) {
          answer += v;
        } else if (i == j || i == n - 1 - j) {
          answer += v;
        }
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

      int v = 0;
      int answer = 0;

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          v = sc.nextInt();
          if (i == n / 2 || j == n / 2) {
            answer += v;
          } else if (i == j || i == n - 1 - j) {
            answer += v;
          }
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    