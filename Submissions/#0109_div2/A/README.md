### Codeforces Beta Round #109 (Div. 2)

# A. I_love_%username%

  [問題はこちら](https://codeforces.com/problemset/problem/155/A)
  
- 概要<br>
  n 回コンテストに出場した記録がある。<br>
  i 回目のコンテストのスコアが与えられる。<br>
  1 回目をのぞいて、過去に比べて最も低いスコアまたは最も高いスコアをとった回数を出力せよ。
  
  
- 発想<br>
  最大値と最小値を 1 回目スコアを初期値にして n 回分調べて、最大値または最小値を更新した回数を数える。
  
  
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

    int maxV = a[0];
    int minV = a[0];
    int answer = 0;

    for (int i = 1; i < n; i++) {
      if (maxV < a[i]) {
        maxV = a[i];
        answer++;
      }
      if (a[i] < minV) {
        minV = a[i];
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
      int n = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      int maxV = a[0];
      int minV = a[0];
      int answer = 0;

      for (int i = 1; i < n; i++) {
        if (maxV < a[i]) {
          maxV = a[i];
          answer++;
        }
        if (a[i] < minV) {
          minV = a[i];
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    