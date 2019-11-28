### Codeforces Round #416 (Div. 2)

# A. Vladik and Courtesy

  [問題はこちら](https://codeforces.com/problemset/problem/811/A)
  
- 概要<br>
  Vladik は a 個、Valera は b 個のキャンディを持っている。<br>
  Vladik は Valera にキャンディを 1 個あげる。<br>
  Valera は Vladik にキャンディを 2 個あげる。<br>
  Vladik は Valera にキャンディを 3 個あげる。<br>
  と相手より 1 個多く渡すことを繰り返す。<br>
  相手からもらったキャンディは渡すことができない場合、先に渡すことができなくなるのはどちらか。
  
  
- 発想<br>
  どちらかが 0 になるまでキャンディをあげる作業を繰り返す。<br>
  10^9 なので計算量が多くなるような気がするが、減らす数は、1,2,3,4 とどんどん増えていくので間に合う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int count = 1;
    bool flg = true;
    string answer = "";

    while (flg) {
      if (count & 1) {
        a -= count;
        if (a < 0) {
          answer = "Vladik";
          flg = false;
        }
      } else {
        b -= count;
        if (b < 0) {
          answer = "Valera";
          flg = false;
        }
      }
      count++;
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

      int a = sc.nextInt();
      int b = sc.nextInt();

      sc.close();

      int count = 1;
      boolean flg = true;
      String answer = "";

      while (flg) {
        if (count % 2 == 1) {
          a -= count;
          if (a < 0) {
            answer = "Vladik";
            flg = false;
          }
        } else {
          b -= count;
          if (b < 0) {
            answer = "Valera";
            flg = false;
          }
        }
        count++;
      }

      System.out.println(answer);

    }

  }
  ```
    