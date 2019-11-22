### Codeforces Round #239 (Div. 2)

# A. Line to Cashier

  [問題はこちら](https://codeforces.com/problemset/problem/408/A)
  
- 概要<br>
  スーパーに、n 個のレジがある。<br>
  i 番目のレジには、k_i 人並んでいて、それぞれ m_i_0 から m_i_j までの商品を持っている。<br>
  1 個の商品をレジで処理するのに 5 秒、すべての商品の処理が終わり決済する処理に 15 秒必要である。<br>
  レジに並んでいる人が空になるまでの最も短いものについて、空になるまでの時間を出力せよ。
  
  
- 発想<br>
  各レジの処理時間を集計して、最も小さい時間を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> k(n);
    for (int i = 0; i < n; i++) {
      cin >> k[i];
    }

    int answer = 100000;
    for (int i = 0; i < n; i++) {
      int m = 0;
      for (int j = 0; j < k[i]; j++) {
        int v;
        cin >> v;
        m += v * 5 + 15;
      }
      answer = min(answer, m);
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

      int[] k = new int[n];
      for (int i = 0; i < n; i++) {
        k[i] = sc.nextInt();
      }

      int answer = 100000;
      for (int i = 0; i < n; i++) {
        int m = 0;
        for (int j = 0; j < k[i]; j++) {
          int v = sc.nextInt();
          m += v * 5 + 15;
        }
        answer = Math.min(answer, m);
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    