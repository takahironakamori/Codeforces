### Educational Codeforces Round 41 (Rated for Div. 2)

# A. Tetris

  [問題はこちら](https://codeforces.com/problemset/problem/961/A)
  
- 概要<br>
  m 個の 1 × 1 の四角形を n 列のプラットフォームに底から順番に置いていく。<br>
  i 番目の四角形は c_i 列に置く。<br>
  n 列すべて四角形で埋まった場合に 1 点入る。<br>
  獲得できる点数は何点か。
  
  
- 発想<br>
  要素 n の配列を用意して、各列に何個四角形が置かれたかを数える。<br>
  それらの最小値が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> count(n);

    for (int i = 0; i < m; i++) {
      int c;
      cin >> c;
      count[c - 1]++;
    }

    int answer = m + 1;
    for (int i = 0; i < n; i++) {
      answer = min(answer, count[i]);
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
      int m = sc.nextInt();

      int[] count = new int[n];
      for (int i = 0; i < m; i++) {
        int c = sc.nextInt();
        count[c - 1]++;
      }

      sc.close();

      int answer = m + 1;

      for (int i = 0; i < n; i++) {
        answer = Math.min(answer, count[i]);
      }

      System.out.println(answer);

    }

  }
  ```
    