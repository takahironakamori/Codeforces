### Codeforces Round #488 by NEAR (Div. 2)

# A. Fingerprints

  [問題はこちら](https://codeforces.com/problemset/problem/994/A)
  
- 概要<br>
  0 から 9 までのテンキーがある。<br>
  n 回押した記録 x と、m 回押した記録 y がある。<br>
  x と y で共通して押されている番号を x で押された順に出力せよ。
  
  
- 発想<br>
  x と y の配列を x の順番で x_i と同じものが y の中にあれば出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
      cin >> x[i];
    }

    vector<int> y(m);
    for (int i = 0; i < m; i++) {
      cin >> y[i];
    }

    deque<int> que;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (x[i] == y[j]) {
          que.push_back(x[i]);
        }
      }
    }

    while (!que.empty()) {
      cout << que.front() << " ";
      que.pop_front();
    }

    cout << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int m = sc.nextInt();

      int[] x = new int[n];
      for (int i = 0; i < n; i++) {
        x[i] = sc.nextInt();
      }

      int[] y = new int[m];
      for (int i = 0; i < m; i++) {
        y[i] = sc.nextInt();
      }

      sc.close();

      Deque<Integer> que = new ArrayDeque<>();

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (x[i] == y[j]) {
            que.addLast(x[i]);
          }
        }
      }

      while (!que.isEmpty()) {
        Integer v = que.pollFirst();
        System.out.print(v + " ");
      }

      System.out.println("");

    }

  }
  ```
    