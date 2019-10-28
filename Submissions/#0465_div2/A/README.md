### Codeforces Round #465 (Div. 2)

# A. Fafa and his Company

  [問題はこちら](https://codeforces.com/problemset/problem/935/A)
  
- 概要<br>
  n 人従業員がいる会社で、リーダーを数名選出したい。<br>
  リーダーの人数は、残った従業員を各リーダーに同じ人数を割り振ることができる数にしたい。<br>
  何パターン考えられるか。
  
- 発想<br>
  n について、1 から順番に n まで、リーダーの数を引いた数がリーダーの数で割り切れる場合を数える。<br>
  
  
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
    