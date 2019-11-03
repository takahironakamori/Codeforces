### Codeforces Round #160 (Div. 2)

# A. Roma and Lucky Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/262/A)
  
- 概要<br>
  4 と 7 を k 回より多く使っている数値は良い数値です。<br>
  n 個数値が与えられるので、よくない数値の個数を出力せよ。
  
  
- 発想<br>
  n 個あるそれぞれの数値を文字列にして、4 と 7 の個数を数えて、k 以下になる数の個数を数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    int answer = 0;
    for (int i = 0; i < n; i++) {
      int count = 0;
      string a;
      cin >> a;
      for (int j = 0; j < a.size(); j++) {
        if (a[j] == '4' || a[j] == '7') {
          count++;
        }
      }
      if (count <= k) {
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
      int k = sc.nextInt();

      int answer = 0;
      for (int i = 0; i < n; i++) {
        int count = 0;
        String A = sc.next();
        String[] a = A.split("");
        for (int j = 0; j < a.length; j++) {
          if (a[j].equals("4") || a[j].equals("7")) {
            count++;
          }
        }
        if (count <= k) {
          answer++;
        }
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    