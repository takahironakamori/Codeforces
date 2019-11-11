### Technocup 2020 - Elimination Round 1

# A. CME

  [問題はこちら](https://codeforces.com/problemset/problem/1223/A)
  
- 概要<br>
  整数 n が q 回与えられる。<br>
  n を a + b = c となるにように、a、b、c に分けたい。<br>
  n にいくつ追加すると、条件を満たすか。
  
- 発想<br>
  a + b = c を満たす最低のパターンは、1 + 1 = 2 なので、n は最低 4 以上必要。<br>
  しかも足し算を成立させるには、a + b + c は偶数でなければならない。<br>
  したがって、4 かつ n 以上で、偶数である最低の値が回答となる。
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      int v;
      cin >> v;

      int answer = 0;

      bool repeat = true;

      while (repeat) {
        if (v % 2 == 0 && 4 <= v) {
          repeat = false;
        } else {
          v++;
          answer++;
        }
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

        int v = sc.nextInt();

        int answer = 0;

        boolean repeat = true;

        while (repeat) {
          if (v % 2 == 0 && 4 <= v) {
            repeat = false;
          } else {
            v++;
            answer++;
          }
        }

        System.out.println(answer);

      }

      sc.close();

    }

  }
  ```
    