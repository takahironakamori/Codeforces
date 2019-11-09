### Good Bye 2016

# A. New Year and Hurry

  [問題はこちら](https://codeforces.com/problemset/problem/750/A)
  
- 概要<br>
  20:00 に開催されるコンテストでは、n 問出題される。<br>
  回答するまでの時間は、1 問目は、5 分かかり、2 問目は 2 * 5分、i 問目は i * 5分かかる。<br>
  しかし、24:00 までにパーティー会場に行かなければならない。<br>
  パーティー会場までは、k 分かかる。<br>
  他の条件はないものにして、コンテストの問題は最大で何問解くことができるか。
  
- 発想<br>
  240 - k がコンテストに使える時間となる。<br>
  時間中に全ての問題を解くことができればいいが、解くことができない場合は、解く時間が短い 1 問目から解く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    int limit = 240 - k;

    int answer = 0;
    int t = 0;

    for(int i = 1; i <= n; i++) {
      t += 5 * i;
      if (limit < t) {
        break;
      }
      answer = i;
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
      sc.close();

      int limit = 240 - k;

      int answer = 0;
      int t = 0;

      for(int i = 1; i <= n; i++) {
        t += 5 * i;
        if (limit < t) {
          break;
        }
        answer = i;
      }

      System.out.println(answer);

    }

  }
  ```
    