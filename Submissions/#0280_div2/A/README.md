### Codeforces Round #280 (Div.2)

# A. Vanya and Cubes

  [問題はこちら](https://codeforces.com/problemset/problem/492/A)
  
- 概要<br>
  n 個のキューブがある。<br>
  これらのキューブを使って、ピラミッドを作りたい。<br>
  しかし、1 段目は 1 個使い、<br>
  2 段目は 1 + 2 = 3 個使い、<br>
  3 段目は 1 + 2 + 3 = 6 個使い、<br>
  i 段目は 1 + 2 + ... + i 個使う。<br>
  ピラミッドを何段作ることができるかを出力せよ。
  
  
- 発想<br>
  1 段目は 1 個使い、<br>
  2 段目は 1 + 2 = 3 個使い、<br>
  3 段目は 1 + 2 + 3 = 6 個使い、<br>
  i 段目は 1 + 2 + ... + i 個使う。<br>
  をシミュレーションすればいいが、次の段を作るためのキューブがなくなったらループをやめる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 1;
    int v = 1;

    while (0 < n) {
      n -= v;
      v = (answer + 1) * (answer + 2) / 2;
      if (v <= n) {
        answer++;
      } else {
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

      int answer = 1;
      int v = 1;

      while (0 < n) {
        n -= v;
        v = (answer + 1) * (answer + 2) / 2;
        if (v <= n) {
          answer++;
        } else {
          n = 0;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    