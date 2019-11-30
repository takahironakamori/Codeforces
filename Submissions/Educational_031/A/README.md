### Educational Codeforces Round 31

# A. Book Reading

  [問題はこちら](https://codeforces.com/problemset/problem/884/A)
  
- 概要<br>
  本を読むのに t 秒かかる。<br>
  この先、n 日間の仕事がある。i 日目は a_i 秒だけ仕事をする。<br>
  86400 - a_i だけ読書をすることができる。<br>
  本を読み終わるのに何日必要か。<br>
  回答が n を超えることはない。
   
  
- 発想<br>
  t が 0 以下になるまで、86400 - a_i を順番に引いていく。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int answer = 1;
    bool flg = true;
    while (flg) {
      t = t - 86400 + a[answer - 1];
      if (t <= 0) {
        flg = false;
      } else {
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
      int t = sc.nextInt();

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      int answer = 1;
      boolean flg = true;
      while (flg) {
        t = t - 86400 + a[answer - 1];
        if (t <= 0) {
          flg = false;
        } else {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    