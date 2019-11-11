### Codeforces Round #511 (Div. 2)

# A. Little C Loves 3 I

  [問題はこちら](https://codeforces.com/problemset/problem/1047/A)
  
- 概要<br>
  n が与えられるので、a + b + c = n になるように、 a、b、cを出力せよ。
  
  
- 発想<br>
  n を 3 で割ったあまりが、2 の場合は、
  a = 1, b = 2, c = n - 3<br>
  上記以外の場合は、
  a = 1, b = 1, c = n - 2<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer1 = 1;
    int answer2 = 1;
    int answer3 = n - 2;

    if (n % 3 == 2) {
      answer1 = 1;
      answer2 = 2;
      answer3 = n - 3;
    }

    cout << answer1 << " ";
    cout << answer2 << " ";
    cout << answer3 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      int answer1 = 1;
      int answer2 = 1;
      int answer3 = n - 2;

      if (n % 3 == 2) {
        answer1 = 1;
        answer2 = 2;
        answer3 = n - 3;
      }

      System.out.println(answer1 + " " + answer2 + " " + answer3);

    }

  }
  ```
    