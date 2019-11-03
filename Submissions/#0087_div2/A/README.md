### Codeforces Beta Round #87 (Div. 2 Only)

# A. Tram

  [問題はこちら](https://codeforces.com/problemset/problem/116/A)
  
- 概要<br>
  路面電車は n 箇所の停留所に止まり、i 番目の停留所では a_i 人の人が降りた後、 b_i 人の人が乗る。<br>
  路面電車は最大何人乗れればいいか出力せよ。
  
  
- 発想<br>
  n 箇所ある停留所の i 番目ごとに何人乗っているのかを計算し、最大値を保持しておく。<br>
  n まで終わったら、最大値を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;
    int current = 0;

    for (int i = 0; i < n; i++) {
      int m, p;
      cin >> m >> p;
      current -= m;
      current += p;
      answer = max(answer, current);
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

      int answer = 0;
      int current = 0;

      for (int i = 0; i < n; i++) {
        int m = sc.nextInt();
        int p = sc.nextInt();
        current -= m;
        current += p;
        answer = Math.max(answer, current);
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    