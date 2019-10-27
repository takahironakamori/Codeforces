### Codeforces Round #465 (Div. 2)

# A. Fafa and his Company

  [問題はこちら](https://codeforces.com/problemset/problem/935/A)
  
- 概要<br>
  n について以下の処理を k 回した結果を出力せよ。<br>
  ・下 1 桁が 0 以外の場合：1 引く<br>
  ・下 1 桁が 0 の場合：10 で割る
  
- 発想<br>
  n について、10 で割り切れる場合は 10 で割り、<br>
  10 で割り切れない場合は、1 引く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 1; i < n; i++) {
      if ((n - i) % i == 0) {
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
      sc.close();

      int answer = 0;

      for (int i = 1; i < n; i++) {
        if ((n - i) % i == 0) {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    