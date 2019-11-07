### Codeforces Round #332 (Div. 2)

# A. Patrick and Shopping

  [問題はこちら](https://codeforces.com/problemset/problem/599/A)
  
- 概要<br>
  家と店 1 と店 2 がある。<br>
  d1 が家から店 1 、d2 が家から店 2 、 d3 が 店 1 から 店 2 までの距離である。<br>
  家をスタート地点として、店1 と 店2 を最低 1 回ずつ行き、家に戻ってくるとする。<br>
  途中で家に帰ってきてもいい。<br>
  その場合の最短距離を求めよ。
  
  
- 発想<br>
  最短距離は次の 4 パターンの中で最も少ない移動距離となる。<br>
  1.家　ー＞　店1　ー＞ 店2　ー＞　家<br>
  2.家　ー＞　店1　ー＞　家 ー＞　店2　ー＞ 家<br>
  3.家　ー＞　店1　ー＞　店2 ー＞　店1　ー＞ 家<br>
  4.家　ー＞　店2　ー＞　店1 ー＞　店2　ー＞ 家<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int answer = d1 + d2 + d3;

    answer = min(answer, d1 + d1 + d2 + d2);

    answer = min(answer, d1 + d1 + d3 + d3);

    answer = min(answer, d2 + d2 + d3 + d3);

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int d1 = sc.nextInt();
      int d2 = sc.nextInt();
      int d3 = sc.nextInt();
      sc.close();

      int answer = d1 + d2 + d3;

      answer = Math.min(answer, d1 + d1 + d2 + d2);

      answer = Math.min(answer, d1 + d1 + d3 + d3);

      answer = Math.min(answer, d2 + d2 + d3 + d3);

      System.out.println(answer);

    }

  }
  ```
    