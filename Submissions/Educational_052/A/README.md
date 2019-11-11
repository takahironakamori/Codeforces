### Educational Codeforces Round 52 (Rated for Div. 2)

# A. Vasya and Chocolate

  [問題はこちら](https://codeforces.com/problemset/problem/1065/A)
  
- 概要<br>
  チョコレートを a 個買うと b 個おまけがもらえる。<br>
  チョコレートの価格は c で、今の所持金は、s である。 
  t 個クエリがあるので、それぞれ最大手に入れることができるチョコレートの個数を出力せよ。<br>
  
  
- 発想<br>
  s / c で買うことができるチョコの個数。<br>
  上記の個数 / a * b が無料でもらえるチョコの個数。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

      long long s, a, b, c;
      cin >> s >> a >> b >> c;

      long long answer = s / c;
      answer += answer / a * b;

      cout << answer << endl;

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

        long s = sc.nextLong();
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();

        long answer = s / c;
        answer += answer / a * b;

        System.out.println(answer);

      }

      sc.close();

    }

  }
  ```
    