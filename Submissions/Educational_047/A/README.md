### Educational Codeforces Round 47 (Rated for Div. 2)

# A. Game Shopping

  [問題はこちら](https://codeforces.com/problemset/problem/1009/A)
  
- 概要<br>
  n 個のゲームが売っている。<br>
  i 番目のゲームの価格は、c_i である。<br>
  財布には、m 枚の紙幣が入っている。<br>
  i 番目の紙幣は、a_j である。<br>
  以下のルールで買うことができるゲームは何個か。<br>
  c_1 から順番にゲームを買うことができるかを調べる。<br>
  a_1 から順番に紙幣を必ず使う。<br>
  ゲームの価格が紙幣の価値以下の場合は、ゲームを買うことができるがお釣りはない。<br>
  c_1 のゲームの価格が　a_1　より大きく、c_2 のゲームの価格が a_1 より小さい場合は、a_1 の紙幣で c_2 のゲームを買うことができるが、c_1 のゲームは今後買えない。<br>
  
  
- 発想<br>
  c_1 と a_1 から順番に比較していく。<br>
  c_i と a_j とすると、ゲームが買えたら j を増やす。<br>
  買えても買えなくても i は a_j と比較した後に i を増やす。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> c(n);
    vector<int> a(m);

    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }

    for (int i = 0; i < m; i++) {
      cin >> a[i];
    }

    int answer = 0;
    int currentM = 0;
    int currentN = 0;

    while (currentN < n && currentM < m) {
      if (c[currentN] <= a[currentM]) {
        answer++;
        currentM++;
        currentN++;
      } else {
        currentN++;
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
      int n = sc.nextInt();
      int m = sc.nextInt();

      int[] c = new int[n];
      int[] a = new int[m];

      for (int i = 0; i < n; i++) {
        c[i] = sc.nextInt();
      }

      for (int i = 0; i < m; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      int answer = 0;
      int currentM = 0;
      int currentN = 0;

      while (currentN < n && currentM < m) {
        if (c[currentN] <= a[currentM]) {
          answer++;
          currentM++;
          currentN++;
        } else {
          currentN++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    