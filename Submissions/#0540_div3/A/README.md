### Codeforces Round #540 (Div. 3)

# A. Water Buying

  [問題はこちら](https://codeforces.com/problemset/problem/1118/A)
  
- 概要<br>
  2 つの店で水を売っている。<br>
  1 つめの店では 1 リットルごとに a で、2 つめの店は 2 リットルごとに b で売っている。<br>
  n リットル買う場合で、最も低い価格はいくらか。

  
- 発想<br>
  a * 2 より b が大きい場合は、1 つめの店ですべて買えばいい。<br>
  上記以外の場合は、2 つめの店でできる買って、あまりがあれば 1 つめの店で買う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      long long n, a, b;
      cin >> n >> a >> b;

      long long answer = 0;

      if (a * 2 < b) {
        answer = n * a;
      } else {
        answer = n / 2 * b + (n % 2) * a;
      }

      cout << answer << endl;

    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int q = sc.nextInt();

      for (int i = 0; i < q; i++) {
        long n = sc.nextLong();
        long a = sc.nextLong();
        long b = sc.nextLong();

        long answer = 0;

        if (a * 2 < b) {
          answer = n * a;
        } else {
          answer = n / 2 * b + (n % 2) * a;
        }

        System.out.println(answer);
      }

      sc.close();
    }

  }
  ```
    