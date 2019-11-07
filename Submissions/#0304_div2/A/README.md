### Codeforces Round #304 (Div. 2)

# A. Soldier and Bananas

  [問題はこちら](https://codeforces.com/problemset/problem/546/A)
  
- 概要<br>
  n ドル持っている。<br>
  バナナを買いたい。<br>
  バナナは、1 本目と k ドル、2 本目は 2 * k ドル、i 本目は i * k ドルかかる。<br>
  w 本のバナナを買うには、いくら足らないか。足りる場合は 0 を出力せよ。<br>
  
  
- 発想<br>
  バナナの価格を繰り返しで計算する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int k, n, w;
    cin >> k >> n >> w;

    int answer = 0;

    for (int i = 0; i < w; i++){
      answer += (i + 1) * k;
    }

    answer = answer - n;

    if (0 < answer) {
      cout << answer << endl;
    } else {
      cout << 0 << endl;
    }

  }   
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int k = sc.nextInt();
      int n = sc.nextInt();
      int w = sc.nextInt();
      sc.close();

      int answer = 0;

      for (int i = 0; i < w; i++){
        answer += (i + 1) * k;
      }

      answer = answer - n;

      if (0 < answer) {
        System.out.println(answer);
      } else {
        System.out.println(0);
      }

    }

  }
  ```
    