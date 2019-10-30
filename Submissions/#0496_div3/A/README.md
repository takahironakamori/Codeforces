### Codeforces Round #496 (Div. 3)

# A. Tanya and Stairways

  [問題はこちら](https://codeforces.com/problemset/problem/1005/A)
  
- 概要<br>
  赤ちゃんのターニャは階段をのぼるときに、1、2、3 と順番に登った回数を声に出して言う。<br>
  しかし、階段の途中で一旦立ち止まって、再度階段をのぼると、1 から再開する。<br>
  立ち止まった回数と、立ち止まったごとに何段階段をのぼったのかを出力せよ。
  
- 発想<br>
  a_i > a_i+1 になったときが立ち止まったときなので、a_i の数をキューに入れる。<br>
  キューのサイズが立ち止まった回数で、それぞれの値がのぼった階段の数となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    deque<int> que;
    for (int i = 1; i < n; i++) {
      if (a[i] <= a[i-1]) {
        que.push_back(a[i-1]);
      }
    }
    que.push_back(a[n-1]);

    cout << que.size() << endl;

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
      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      Deque<Integer> que = new ArrayDeque<>();
      for (int i = 1; i < n; i++) {
        if (a[i] <= a[i-1]) {
          que.addLast(a[i-1]);
        }
      }
      que.addLast(a[n-1]);

      System.out.println(que.size());

      while (!que.isEmpty()) {
        Integer v = que.pollFirst();
        System.out.print(v + " ");
      }

      System.out.println("");

    }

  }
  ```
    