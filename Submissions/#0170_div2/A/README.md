### Codeforces Round #170 (Div. 2)

# A. Circle Line

  [問題はこちら](https://codeforces.com/problemset/problem/278/A)
  
- 概要<br>
  n 個、駅があって、円周上に繋がっている。<br>
  d_1 は、1 番目の駅と 2 番目の駅の距離。<br>
  d_2 は、2 番目の駅と 3 番目の駅の距離。<br>
  ...<br>
  d_{n-1} は、n-1 番目の駅と n 番目の駅の距離。<br>
  d_n は、n 番目の駅と 1 番目の駅の距離。<br>
  スタート地点 s とゴール地点 t が与えられるので、最短距離を出力せよ。<br>
  右回りか左回りは問わない。
  
  
- 発想<br>
  右周りの場合と左周りの場合での距離を計算して、小さい方を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0; i < n; i++) {
      cin >> d[i];
    }

    int s, t;
    cin >> s >> t;

    int answer = 0;
    int d1 = 0;
    int d2 = 0;

    if (t < s) {
      for (int i = s - 1; i < n; i++) {
        d1 += d[i];
      }
      for (int i = 0; i < t - 1; i++) {
        d1 += d[i];
      }
      for (int i = t - 1; i < s - 1; i++) {
        d2 += d[i];
      }
      answer = min(d1, d2);
    } else if (s == t) {
      answer = 0;
    } else {
      for (int i = s - 1; i < t - 1; i++) {
        d1 += d[i];
      }
      for (int i = t - 1; i < n; i++) {
        d2 += d[i];
      }
      for (int i = 0; i < s - 1; i++) {
        d2 += d[i];
      }
      answer = min(d1, d2);
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
      int[] d = new int[n];
      for (int i = 0; i < n; i++) {
        d[i] = sc.nextInt();
      }
      int s = sc.nextInt();
      int t = sc.nextInt();
      sc.close();

      int answer = 0;
      int d1 = 0;
      int d2 = 0;

      if (t < s) {
        for (int i = s - 1; i < n; i++) {
          d1 += d[i];
        }
        for (int i = 0; i < t - 1; i++) {
          d1 += d[i];
        }
        for (int i = t - 1; i < s - 1; i++) {
          d2 += d[i];
        }
        answer = Math.min(d1, d2);
      } else if (s == t) {
        answer = 0;
      } else {
        for (int i = s - 1; i < t - 1; i++) {
          d1 += d[i];
        }
        for (int i = t - 1; i < n; i++) {
          d2 += d[i];
        }
        for (int i = 0; i < s - 1; i++) {
          d2 += d[i];
        }
        answer = Math.min(d1, d2);
      }

      System.out.println(answer);

    }

  }
  ```
    