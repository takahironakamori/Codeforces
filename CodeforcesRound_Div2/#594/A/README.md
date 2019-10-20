### Codeforces Round #594 (Div. 2)

# A. Integer Points

  [問題はこちら](https://codeforces.com/contest/1248/problem/A)
  
- 概要<br>
  n 本 の y = x + p_i(p_1 から p_nまで) と m 本の y = -x + q_i(q_1 から q_mまで) のグラフがある。<br>
  グラフの交点（x, y）の両方が整数値である箇所は何か所あるか。<br>
  
- 発想<br>
  傾きが同じグラフ同士での交点はない。<br>
  切片が偶数同士または奇数同士のグラフでないと、グラフの交点（x, y）は整数にならない。<br>
  
- 実装のポイント<br>
  n の上限が10^5、m の上限が10^5 なので、for文を二重にすると計算量が多い。<br>
  n 本のグラフのうち切片（p_i）が偶数の個数を数える。(n - 偶数の個数 = 奇数の個数)<br>
  m 本のグラフのうち切片（q_i）が偶数の個数を数える。(m - 偶数の個数 = 奇数の個数)<<br>
  n 本のグラフのうち偶数の数 * m 本のグラフのうち偶数の数 + n 本のグラフのうち奇数の数 * m 本のグラフのうち奇数の数が回答となる。<br>
  C++ だと long型だと足らない場合がある。 

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    vector<int> n(t);
    vector<int> p(t);

    vector<int> m(t);
    vector<int> q(t);

    for (int i = 0; i < t; i++) {
      cin >> n[i];
      for (int j = 0; j < n[i]; j++) {
        int v;
        cin >> v;
        if (v % 2 == 0) {
          p[i]++;
        }
      }
      cin >> m[i];
      for (int j = 0; j < m[i]; j++) {
        int v;
        cin >> v;
        if (v % 2 == 0) {
          q[i]++;
        }
      }
    }

    for (int i = 0; i < t; i++) {
      long long a1 = (long long) p[i] * (long long) q[i];
      long long a2 = (long long) (n[i] - p[i]) * (long long) (m[i] - q[i]);
      cout << a1 + a2 << endl;
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
      int[] n = new int[t];
      int[] p = new int[t];
      int[] m = new int[t];
      int[] q = new int[t];

      for (int i = 0; i < t; i++) {
        n[i] = sc.nextInt();
        for (int j = 0; j < n[i]; j++) {
          int v = sc.nextInt();
          if (v % 2 == 0) {
            p[i]++;
          }
        }
        m[i] = sc.nextInt();
        for (int j = 0; j < m[i]; j++) {
          int v = sc.nextInt();
          if (v % 2 == 0) {
            q[i]++;
          }
        }
      } 

      sc.close();

      for (int i = 0; i < t; i++) {
        long a1 = (long) p[i] * (long) q[i];
        long a2 = (long) (n[i] - p[i]) * (long) (m[i] - q[i]);
        System.out.println(a1 + a2);
      }

    }

  }
  ```
    