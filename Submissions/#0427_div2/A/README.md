### Codeforces Round #427 (Div. 2)

# A. Key races

  [問題はこちら](https://codeforces.com/problemset/problem/835/A)
  
- 概要<br>
  キーボードを使ったゲームを2人でする。<br>
  s 文字タイピングする。<br>
  1 人目は t_1 ミリ秒待機し、v_1 ミリ秒で 1 文字タイピングして、t_1 ミリ秒後に入力を終える。<br>
  2 人目は t_2 ミリ秒待機し、v_2 ミリ秒で 1 文字タイピングして、t_2 ミリ秒後に入力を終える。<br>
  入力を終えるまでの時間が短い方が勝ちとすると、勝った方（First または Second）を出力せよ。<br>
  同じ時間の場合は、Friendship と出力せよ。
  
- 発想<br>
  t_i + v_i * 文字数 + t_i が 1 人の入力を終えるまでの時間となる。<br>
  比較して、出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int r1 = t1 * 2 + v1 * s;
    int r2 = t2 * 2 + v2 * s;

    if (r1 == r2) {
      cout << "Friendship" << endl;
    } else if (r1 < r2) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int s = sc.nextInt();
      int v1 = sc.nextInt();
      int v2 = sc.nextInt();
      int t1 = sc.nextInt();
      int t2 = sc.nextInt();
      sc.close();

      int r1 = t1 * 2 + v1 * s;
      int r2 = t2 * 2 + v2 * s;

      if (r1 == r2) {
        System.out.println("Friendship");
      } else if (r1 < r2) {
        System.out.println("First");
      } else {
        System.out.println("Second");
      }

    }

  }
  ```
    