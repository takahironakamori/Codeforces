### Codeforces Round #348 (Div. 2)

# A. Little Artem and Presents

  [問題はこちら](https://codeforces.com/problemset/problem/669/A)
  
- 概要<br>
  整数 n が与えられて、n をできる限り多くの数に分けたい。<br>
  しかし、同じ数を連続して使ってはいけない。
  
- 発想<br>
  1, 2, 1, 2, ... の繰り返し最も多くの数に分けることになる。<br>
  その回数は、n を 3 で割った商に、2を掛ければいい。<br>
  ただし、n を 3 で割ったあまりが、1 か 2 のときは 1 回加える必要がある。
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long n;
    cin >> n;

    long long answer = 0;

    if (n == 1 || n == 2 ){
      answer = 1;
    } else {
      answer = n / 3 * 2;
      if (n % 3 != 0) {
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
      long n = sc.nextLong();
      sc.close();

      long answer = 0;

      if (n == 1 || n == 2 ){
        answer = 1;
      } else {
        answer = n / 3 * 2;
        if (n % 3 != 0) {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    