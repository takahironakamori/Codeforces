### Codeforces Round #246 (Div. 2)

# A. Choosing Teams

  [問題はこちら](https://codeforces.com/problemset/problem/432/A)
  
- 概要<br>
  n 人の生徒がいる。<br>
  i 番目のコンテストの参加回数は y_i である。<br>
  生徒は 1 人 5 回までコンテストに参加できる。<br>
  しかし、コンテストは 1 チーム 3 人でチームを組む必要がある。<br>
  k 回コンテストが開催予定である。<br>
  何チーム参加することができるか。
  
  
- 発想<br>
  5 - b が k 以上の生徒の数を数える。<br>
  その生徒の数を k で割った結果が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      int b;
      cin >> b;
      if (k <= 5 - b) {
        answer++;
      }
    }

    cout << answer / 3 << endl;

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

      int answer = 0;

      for (int i = 0; i < n; i++) {
        int b = sc.nextInt();
        if (k <= 5 - b) {
          answer++;
        }
      }
      sc.close();

      System.out.println(answer / 3);

    }

  }
  ```
    