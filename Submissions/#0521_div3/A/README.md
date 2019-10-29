### Codeforces Round #521 (Div. 3)

# A. Frog Jumping

  [問題はこちら](https://codeforces.com/problemset/problem/1077/A)
  
- 概要<br>
  カエルが 0 の位置から一直線上をジャンプする。<br>
  奇数回目のジャンプは a だけ右へ、偶数回目のジャンプは b だけ左へ飛ぶ。<br>
  k 回ジャンプした後の位置を出力せよ。<br>

  
- 発想<br>
  for 文でシミュレーションすると、k の上限が 1000000000 なので時間がかかる。<br>
  k が偶数の時は、a * k / 2 だけ右へ飛び、b * k / 2 だけ左へ飛ぶ。<br>
  k が奇数の時は、a * (k / 2 + 1) だけ右へ飛び、b * k / 2 だけ左へ飛ぶ。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      
      long long a, b, k;
      cin >> a >> b >> k;
      
      long long answer = 0;
      long long c = k / 2;
      
      if (k % 2 == 0) {
        answer += a * c;
      } else {
        answer += a * (c + 1);
      }
      
      answer -= b * c;
      
      cout << answer  << endl;
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
        long a = sc.nextLong();
        long b = sc.nextLong();
        long k = sc.nextLong();

        long answer = 0;
        long c = k / 2;

        if (k % 2 == 0) {
          answer += a * c;
        } else {
          answer += a * (c + 1);
        }
        answer -= b * c;

        System.out.println(answer);
      }

      sc.close();    

    }

  }
  ```
    