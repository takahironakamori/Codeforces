### Codeforces Round #392 (Div. 2)

# A. Holiday Of Equality

  [問題はこちら](https://codeforces.com/problemset/problem/758/A)
  
- 概要<br>
  n 人の市民がいる国がある。<br>
  n 人の市民に平等に祝日を与えたい。<br>
  n 人の市民のうち i 番目の市民の祝日の数は、a_i である。<br>
  今与えられている祝日を減らすことなく、全員が同じ祝日にするには全部で何日祝日を与える必要があるか。
  
- 発想<br>
  a_i のうち最大の値を取得する。<br>
  最大の値と a_i の差を足し合わせる。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    int m = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      m = max(m, a[i]);
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
      answer += abs(m - a[i]);
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
      int m = 0;
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
        m = Math.max(m, a[i]);
      }
      sc.close();

      int answer = 0;
      for (int i = 0; i < n; i++) {
        answer += Math.abs(m - a[i]);
      }

      System.out.println(answer);

    }

  }
  ```
    