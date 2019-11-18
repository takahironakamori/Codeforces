### School Personal Contest #1 (Winter Computer School 2010/11) - Codeforces Beta Round #38 (ACM-ICPC Rules)

# A. Army

  [問題はこちら](https://codeforces.com/problemset/problem/38/A)
  
- 概要<br>
  1 から n までのランクがある。n が最高ランクである。<br>
  ランク i からランク i + 1 に上がるには、d_i 年必要である。<br>
  i - 1 ランクに到達していないのに、ランク i に到達することは不可能。<br>
  ランク a のVasyaは、b ランクになりたい。<br>
  b ランクになるまで、何年かかるかを出力せよ。
  
- 発想<br>
  a から b になるまで、d_i を足していく。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0; i < n - 1; i++) {
      cin >> d[i];
    }

    int a, b;
    cin >> a >> b;

    int answer = 0;

    for (int i = a - 1; i < b - 1; i++) {
      answer += d[i];
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
      for (int i = 0; i < n - 1; i++) {
        d[i] = sc.nextInt();
      }
      int a = sc.nextInt();
      int b = sc.nextInt();
      sc.close();

      int answer = 0;

      for (int i = a - 1; i < b - 1; i++) {
        answer += d[i];
      }

      System.out.println(answer);

    }

  }
  ```
    