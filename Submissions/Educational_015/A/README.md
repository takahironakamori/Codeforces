### Educational Codeforces Round 15

# A. Maximum Increase

  [問題はこちら](https://codeforces.com/problemset/problem/702/A)
  
- 概要<br>
  n 個の整数が並ぶ数列がある。<br>
  数列内に増加し続けている最大の長さを出力せよ。
  
- 発想<br>
  配列を用意し、前の数字より大きかったら前の要素の値 +1 し、そうでない場合は 1 にする。<br>
  そうでない場合に、最大値ならこれまでの最大値と入れ替える。<br>
  別に配列じゃなくて変数で状況を管理してもいい。
  
  
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

    int answer = 0;

    vector<int> count(n);
    count[0] = 1;
    for (int i = 1; i < n; i++) {
      if (a[i-1] < a[i]) {
        count[i] = count[i - 1] + 1;
      } else {
        answer = max(answer, count[i - 1]);
        count[i] = 1;
      } 
    }
    answer = max(answer, count[n - 1]);

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

      int answer = 0;

      int[] count = new int[n];
      count[0] = 1;
      for (int i = 1; i < n; i++) {
        if (a[i-1] < a[i]) {
          count[i] = count[i - 1] + 1;
        } else {
          answer = Math.max(answer, count[i - 1]);
          count[i] = 1;
        } 
      }
      answer = Math.max(answer, count[n - 1]);

      System.out.println(answer);

    }

  }
  ```
    