### Codeforces Round #372 (Div. 2)

# A. Crazy Computer

  [問題はこちら](https://codeforces.com/problemset/problem/716/A)
  
- 概要<br>
  n 文字の文字列が与えられる。<br>
  文字列は B と W の 2 種類。<br>
  1文字以上、B が連続している場合はこれらを 1 つのまとまりと見る。<br>
  n 文字の中で B のまとまりの個数と、まとまりがどのように並んでいるかを出力せよ。
  
- 発想<br>
  文字列 n の中で B を数える。<br>
  B から W に変わったときに、それまでの B のカウントをキューに入れる。<br>
  文字列 n の最後の文字が B の場合は、最後の文字のところで、それまで数えた B のカウントをキューに入れる。<br>
  キューのサイズがまとまりの個数となる。
  まとまりの個数が 1 以上の場合、キューの中身を順番に出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n,c;
    cin >> n >> c;

    int before = 0;
    int answer = 0;

    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      if (v - before <= c) {
        answer++;
      } else {
        answer = 1;
      }
      before = v;
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
      int c = sc.nextInt();

      int before = 0;
      int answer = 0;

      for (int i = 0; i < n; i++) {
        int v = sc.nextInt();
        if (v - before <= c) {
          answer++;
        } else {
          answer = 1;
        }
        before = v;
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    