### Educational Codeforces Round 67 (Rated for Div. 2)

# A. Stickers and Toys

  [問題はこちら](https://codeforces.com/contest/1187/problem/A)
  
- 概要<br>
  n 個のチョコレートエッグがある。<br>
  チョコレートエッグには次のどれかのおまけがある。<br>
  ・ sticker が 1 つ入っている。<br>
  ・ toy が 1 つ入っている。<br>
  ・ sticker と toy が 1 つ入っている。<br>
  sticker の総数は s 、toy の総数は t とわかっている。<br>
  sticker と toy をそれぞれ最低 1 つ手に入れるには、最低何個のチョコレートエッグを買えばいいか。 
  
  
- 発想<br>
  n - s と n - t の大きい方の値に 1 を加えたものが回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int T;
    cin >> T;

    while (0 < T) {

      int n, s, t;
      cin >> n >> s >> t;

      cout << max(n - s, n - t) + 1 << endl;

      T--;

    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int T = sc.nextInt();

      while (0 < T) {
        int n = sc.nextInt();
        int s = sc.nextInt();
        int t = sc.nextInt();
        System.out.println(Math.max(n - s, n - t) + 1);
        T--;
      }

      sc.close();

    }


  }
  ```
    