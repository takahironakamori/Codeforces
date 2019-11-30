### Educational Codeforces Round 36 (Rated for Div. 2)

# A. Garden

  [問題はこちら](https://codeforces.com/problemset/problem/915/A)
  
- 概要<br>
  広さ k の庭に水をかけたい。<br>
  n 個のバケツがあり、i 番目のバケツの容量は、a_i である。<br>
  すでに水がかかったところにかけることはできない。<br>
  庭を超えた範囲に水をかけることはできない。<br>
  バケツは 1 個しか使うことはできない。<br>
  どのバケツも水がたまる時間は 1 時間である。<br>
  最短で何時間で庭に水をかけることができるか。
   
  
- 発想<br>
  k が a_i で割り切れるバケツのうち、最も回数が少ないバケツを選択する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    int answer = 1000;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (k % a == 0) {
        answer = min(answer, k / a);
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
      int k = sc.nextInt();

      int answer = 1000;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (k % a == 0) {
          answer = Math.min(answer, k / a);
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    