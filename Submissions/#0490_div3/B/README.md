### Codeforces Round #490 (Div. 3) 

# B. Reversing Encryption

  [問題はこちら](https://codeforces.com/problemset/problem/999/B)
  
- 概要<br>
  長さ n の文字列 s がある。<br>
  これを以下の手順で暗号化する。<br>
  ・文字列を反転させる。<br>
  ・1 から順番にカウントし、n 以外で、n で割り切れる数になったら 1 文字目からその割り切れる数までの文字列を反転させる。<br>
  ・割り切れる数が 1 になったら終了。<br>
  これらの作業を行なった後の文字列が与えられるので、暗号化前の文字列を出力せよ。
  
  
- 発想<br>
  i を 1 からカウントして、n で割り切れる数だったら、1 から i 文字目までを反転させる。<br>
  i が n になるまで繰り返す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        reverse(s.begin(), s.begin() + i);
      }
    }

    cout << s << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      String s = sc.next();
      sc.close();

      for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
          String s_ = s.substring(0, i);
          StringBuffer sb = new StringBuffer(s_);
          String R = sb.reverse().toString();
          s = R + s.substring(i);
        }
      }

      System.out.println(s);

    }

  }
  ```
    