### Codeforces Round #476 (Div. 2) \[Thanks, Telegram!]

# A. Paper Airplanes

  [問題はこちら](https://codeforces.com/problemset/problem/965/A)
  
- 概要<br>
  1 枚の紙から s 個の紙飛行機を作ることができる。<br>
  k 人の人がいて、それぞれ n 個の紙飛行機を作りたい。<br>
  紙は 1 パック p 枚入りである。<br>
  何パック買う必要があるか。
  
  
- 発想<br>
  n / s （小数点切り上げ）で 1 人当たり必要な紙の枚数がわかる。<br>
  それに k をかければ必要な紙の総数がわかる。<br>
  紙の総数を p で割る（小数点切り上げ）と何パック買う必要があるかがわかる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int k, n, s, p;
    cin >> k >> n >> s >> p;

    int total = k * ceil((double) n / s);

    int answer = ceil((double) total / p);

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int k = sc.nextInt();
      int n = sc.nextInt();
      int s = sc.nextInt();
      int p = sc.nextInt();
      sc.close();

      int total = k * (int) Math.ceil((double) n / s);

      int answer = (int) Math.ceil((double) total / p);

      System.out.println(answer);

    }

  }
  ```
    