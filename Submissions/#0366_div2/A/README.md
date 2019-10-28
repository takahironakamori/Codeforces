### Codeforces Round #366 (Div. 2)

# A. Hulk

  [問題はこちら](https://codeforces.com/problemset/problem/705/A)
  
- 概要<br>
  n が与えられる。<br>
  1 からカウントして、以下のような操作を行う。<br>
  ・奇数の場合は、I love をつける。<br>
  ・偶数の場合は、I hate をつける。<br>
  ・I love と I hate の間は that でつなげる。<br>
  ・カウントが最後になったら、that ではなく it で終わる。<br>
  n まで続けるとどのようになるか。
  
- 発想<br>
  i = 0 から n - 1 まで以下を繰り返す。<br>
  ・偶数の場合は、I love をつける。<br>
  ・奇数の場合は、I hate をつける。<br>
  ・i != n - 1 なら that 加え、 i == n - 1 なら、it を加える。<br>
  ※for 文を0から開始するため、偶奇が逆になる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string hate = "I hate ";
    string love = "I love ";
    string answer = "";

    for (int i = 0; i < n; i++) {

      if (i % 2 == 0) {
        answer += hate;
      } else {
        answer += love;
      }

      if (i == n - 1) {
        answer += "it";
      } else {
        answer += "that ";
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
      sc.close();

      String hate = "I hate ";
      String love = "I love ";
      String answer = "";

      for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
          answer += hate;
        } else {
          answer += love;
        }

        if (i == n - 1) {
          answer += "it";
        } else {
          answer += "that ";
        }

      }

      System.out.println(answer);

    }

  }
  ```
    