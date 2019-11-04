### Codeforces Round #225 (Div. 2)

# A. Coder

  [問題はこちら](https://codeforces.com/problemset/problem/384/A)
  
- 概要<br>
  チェスの新しいコマ「Coder」を考えた。<br>
  Coder は 上下左右に1コマ移動し、攻撃することができる。<br>
  n * n のマスがあり、何個でも Coder を置くことができるとする。<br>
  Coder同士がぶつからないように置くことができるのは最大何個か。
  また、その時のCoderの配置状況も出力せよ。
  
  
- 発想<br>
  交互に配置するのが最大配置パターンとなる。
  
  
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
    