### Educational Codeforces Round 68 (Rated for Div. 2)

# A. Remove a Progression

  [問題はこちら](https://codeforces.com/problemset/problem/1194/A)
  
- 概要<br>
  1 から n まで整数が並んでいる。<br>
  1 から始めて i 回、並んでいる整数のうち i 番目の整数を消す。<br>
  【例】<br>
  1 回目は並んでいる整数のうち 1 番目の整数を消す。<br>
  2 回目は残っている整数のうち 2 番目の整数を消す。<br>
  この作業を消す整数があるまで続ける。<br>
  T 個のクエリが与えらえれる。<br>
  各クエリには、n と x が与えられる。<br>
  作業が終わったときの、x 番目の整数を出力せよ。
  
  
- 発想<br>
  作業を試すと、偶数が順番に2,4,6...と残ることがわかる。<br>
  したがって、x * 2 を出力すればいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

      int n, x;
      cin >> n >> x;

      cout << x * 2 << endl;

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

      for (int i = 0; i < t; i++) {

        int n = sc.nextInt();
        int x = sc.nextInt();

        System.out.println(x * 2);

      }

      sc.close();

    }

  }
  ```
    