### Codeforces Beta Round #105 (Div. 2)

# A. Insomnia cure

  [問題はこちら](https://codeforces.com/problemset/problem/148/A)
  
- 概要<br>
  d 匹のドラゴンがいる。<br>
  姫はドラゴンに以下の攻撃をして物理的または精神的なダメージを与える。<br>
  k 匹目ごとに、ドラゴンにパンチする。<br>
  l 匹目ごとに、ドラゴンに尾をドアで攻撃する。<br>
  m 匹目ごとに、ドラゴンの足を踏みつける。<br>
  n 匹目ごとに、ドラゴンを脅す。<br>
  d 匹のドラゴンのうち、物理的または精神的なダメージを受けたドラゴンは何匹か。
  
  
- 発想<br>
  1 から順番に d まで、k, l, m, n のいずれかで割り切れる数をカウントする。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int answer = 0;

    for (int i = 1; i <= d; i++) {
      if (i % k == 0) {
        answer++;
      } else if (i % l == 0) {
        answer++;
      } else if (i % m == 0) {
        answer++;
      } else if (i % n == 0) {
        answer++;
      }
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
      int k = sc.nextInt();
      int l = sc.nextInt();
      int m = sc.nextInt();
      int n = sc.nextInt();
      int d = sc.nextInt();
      sc.close();

      int answer = 0;

      for (int i = 1; i <= d; i++) {
        if (i % k == 0) {
          answer++;
        } else if (i % l == 0) {
          answer++;
        } else if (i % m == 0) {
          answer++;
        } else if (i % n == 0) {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    