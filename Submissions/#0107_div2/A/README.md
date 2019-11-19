### Codeforces Beta Round #107 (Div. 2)

# A. Soft Drinking

  [問題はこちら](https://codeforces.com/problemset/problem/151/A)
  
- 概要<br>
  n 人の友達がいる。<br>
  k 本のソフトドリンクを買った。それぞれ l ミリリットルある。<br>
  c 個のライムを d 枚にスライスする。<br>
  p グラムの塩がある。<br>
  トーストを作るためには、それぞれの友達に nl ミリリットルのドリンク、スライスしたライムが 1 枚、np グラムの塩がいる。<br>
  友達それぞれ同じ量のトーストをあげる場合、1 人当たり最大どれだけのトーストを作ることができるか。
  
  
- 発想<br>
  k * l / nl、<br>
  c * d、<br>
  p / np、<br>
  うち最も小さいものを n で割ったものが回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int answer = k * l / nl;
    answer = min(answer, c * d);
    answer = min(answer, p / np);

    cout << answer / n << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int k = sc.nextInt();
      int l = sc.nextInt();
      int c = sc.nextInt();
      int d = sc.nextInt();
      int p = sc.nextInt();
      int nl = sc.nextInt();
      int np = sc.nextInt();
      sc.close();

      int answer = k * l / nl;
      answer = Math.min(answer, c * d);
      answer = Math.min(answer, p / np);

      System.out.println(answer / n);

    }

  }
  ```
    