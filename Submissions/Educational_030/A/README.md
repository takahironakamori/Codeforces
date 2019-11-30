### Educational Codeforces Round 30

# A. Chores

  [問題はこちら](https://codeforces.com/problemset/problem/873/A)
  
- 概要<br>
  n 個の仕事を表す数列が与えられる。<br>
  数列の i 番目は a_i であり、1 人で行った場合の作業完了までの時間を示す。<br>
  k 個は誰かと一緒にやる。<br>
  誰かと一緒にやる場合、1 つの仕事につき完了まで、x 必要である。<br>
  すべての仕事を完了するのに、最小の時間を出力せよ。
  
  
- 発想<br>
  a のうち、仕事のうち作業時間が多いものを k 個を x に置き換え、a の合計を計算する。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
      a[a.size() - 1 - i] = x;
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
      answer += a[i];
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
      int k = sc.nextInt();
      int x = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      for (int i = 0; i < k; i++) {
        a[a.length - 1 - i] = x;
      }

      int answer = 0;
      for (int i = 0; i < n; i++) {
        answer += a[i];
      }

      System.out.println(answer);

    }

  }
  ```
    