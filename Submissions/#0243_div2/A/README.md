### Codeforces Round #243 (Div. 2)

# A. Sereja and Mugs

  [問題はこちら](https://codeforces.com/problemset/problem/426/A)
  
- 概要<br>
  容積 s の空カップと、n 個のマグカップを使ったゲームをする。<br>
  n 個のマグカップには最初水が入っていて、i 番のマグカップの内容量は a_i である。<br>
  各プレイヤーは一回ずつ、空でないマグカップを一つ選んで、その中身をカップに移す。<br>
  カップから水があふれた場合、そのプレイヤーの負けとなる。<br>
  n - 1 人でこのゲームをプレイするとき、誰も負けないようなプレイが可能かを出力せよ。
  
  
- 発想<br>
  マグカップを容量を小さい順に並び替える。<br>
  小さい方から n - 1 個までの容量の合計が s 以下であれば "YES" を、<br>
  超える場合は "NO" を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int w = 0;
    for (int i = 0; i < n - 1; i++) {
      w += a[i];
    }

    if (w <= s) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int s = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(a);

      int w = 0;
      for (int i = 0; i < n - 1; i++) {
        w += a[i];
      }

      if (w <= s) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    