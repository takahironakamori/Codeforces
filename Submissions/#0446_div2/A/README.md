### Codeforces Round #446 (Div. 2)

# A. Greed

  [問題はこちら](https://codeforces.com/problemset/problem/892/A)
  
- 概要<br>
  n 個の数列が 2 つ与えられる。<br>
  1 つ目はコーラの量であり、i 番目のコーラの量は a_i である。<br>
  2 つ目はカップの容量であり、i 番目のカップの容量は b_i である。<br>
  すべてのコーラを 2 つのカップに入れたい。<br>
  入れることができる場合は YES を、できない場合は NO を出力せよ。
  
  
- 発想<br>
  n が 2 なら YES を出力する。<br>
  それ以外の場合、コーラの合計がカップのうち容量の大きい順 2 個の容量の合計以下であれば、入れることができる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      sum += a;
    }

    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    sort(b.begin(), b.end());

    string answer = "YES";

    if (n != 2) {
      if ((b[n - 1] + b[n - 2]) < sum) {
        answer = "NO";
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

      long sum = 0;
      for (int i = 0; i < n; i++) {
        sum += sc.nextInt();
      }

      int [] b = new int[n];
      for (int i = 0; i < n; i++) {
        b[i] = sc.nextInt();
      }

      sc.close();

      Arrays.sort(b);

      String answer = "YES";

      if (n != 2) {
        if ((b[n - 1] + b[n - 2]) < sum) {
          answer = "NO";
        }
      }

      System.out.println(answer);

    }

  }
  ```
    