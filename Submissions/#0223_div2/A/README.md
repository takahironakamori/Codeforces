### Codeforces Round #223 (Div. 2)

# A. Sereja and Dima

  [問題はこちら](https://codeforces.com/problemset/problem/381/A)
  
- 概要<br>
  2 人でゲームをする。<br>
  n 個の数字が横に 1 列になって並んでいる。<br>
  右端か左端の数値を 1 つ取ることができる。<br>
  1 人目、2 人目、1 人目... と数字がなくなるまで繰り返す。<br>
  1 人目と 2 人目の得点の最大値はそれぞれ何点か。
  
  
- 発想<br>
  deque などを使ってシミュレーションをする。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    deque<int> que;

    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      que.push_back(v);
    }

    int first = 0;
    int second = 0;
    int current = 0;

    while (!que.empty()) {

      int f = que.front();
      int b = que.back();
      int v = 0;

      if (b < f){
        v = f;
        que.pop_front();
      } else {
        v = b;
        que.pop_back();
      }
      if (current % 2 == 0){
        first += v;
      } else {
        second += v;
      }
      current++;
    }

    cout << first << " " << second << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      Deque<Integer> que = new ArrayDeque<>();
      for (int i = 0; i < n; i++) {
        int v = sc.nextInt();
        que.addLast(v);
      }
      sc.close();

      int first = 0;
      int second = 0;
      int current = 0;

      while (!que.isEmpty()) {

        int f = que.peekFirst();
        int b = que.peekLast();
        int v = 0;

        if (b < f){
          v = f;
          que.pollFirst();
        } else {
          v = b;
          que.pollLast();
        }
        if (current % 2 == 0){
          first += v;
        } else {
          second += v;
        }
        current++;
      }

      System.out.println(first + " " + second);

    }

  }
  ```
    