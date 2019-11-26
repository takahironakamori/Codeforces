### Technocup 2017 Final Cup and #403

# A. Andryusha and Socks

  [問題はこちら](https://codeforces.com/contest/780/problem/A)
  
- 概要<br>
  n 組のソックスがある。<br>
  それぞれ 1 から n 番までの番号がそれぞれのソックスに付いている。<br>
  i 番目 に手に取ったソックスの番号は、x_i で、机の上に同じ番号のソックスが置いてある場合は、組み合わせてクローゼットにしまう。<br>
  そうでない場合は、机の上に置いておく。<br>
  机の上には何も置かれていない状態から始める。<br>
  すべての作業が終えたときに、机の上に最大何個のソックスが置いてあったかを出力せよ。
  
  
- 発想<br>
  机の上に置いたソックスの数を順番に調べる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<bool> pair(n+1);
    int answer = 0;
    int count = 0;

    for (int i = 0; i < n * 2; i++) {
      int x;
      cin >> x;
      if (pair[x] == false) {
        pair[x] = true;
        count++;
        answer = max(answer, count);
      } else {
        pair[x] = false;
        count--;
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

      boolean[] pair = new boolean[n+1];
      int answer = 0;
      int count = 0;

      for (int i = 0; i < n * 2; i++) {
        int x = sc.nextInt();
        if (pair[x] == false) {
          pair[x] = true;
          count++;
          answer = Math.max(answer, count);
        } else {
          pair[x] = false;
          count--;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    