### Codeforces Beta Round #32 (Div. 2, Codeforces format)

# A. Reconnaissance

  [問題はこちら](https://codeforces.com/problemset/problem/32/A)
  
- 概要<br>
  n 人から 2 人組みを作りたい。<br>
  ただし、2 人の身長( a_i ）の差が d 以内でなければならない。<br>
  何組み作ることができるか。<br>
  また、(1, 2)と(2, 1)は別の組みとみなす。
  
- 発想<br>
  a[i] と他の a[j] で差の絶対値が d 以内のものをmapに入れる。<br>
  map の要素の数 - 1 が (a[i], 誰か) の組み合わせ数となる。<br>
  これを a_0 から a_n まで繰り返す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int answer = 0;

    deque<int> que;
    for (int i = 0; i < n; i++) {
      que.clear();
      que.push_back(a[i]);
      for (int j = 0; j < n; j++) {
        if (i != j) {
          if (abs(a[i] - a[j]) <= d) {
            que.push_back(a[j]);
          }
        }
      }
      answer += que.size() - 1;
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
      int d = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      int answer = 0;

      Deque<Integer> que = new ArrayDeque<>();
      for (int i = 0; i < n; i++) {
        que.clear();
        que.addLast(a[i]);
        for (int j = 0; j < n; j++) {
          if (i != j) {
            if (Math.abs(a[i] - a[j]) <= d) {
              que.addLast(a[j]);
            }
          }
        }
        answer += que.size() - 1;
      }

      System.out.println(answer);

    }

  }
  ```
    