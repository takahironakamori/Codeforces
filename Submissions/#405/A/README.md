### Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1)

# A. Bear and Big Brother

  [問題はこちら](https://codeforces.com/problemset/problem/791/A)
  
- 概要<br>
  体重が a のクマと b のクマがいて、a < b である。<br>
  a のクマは 1 年で体重が 3 倍になる。b のクマは 1 年で体重が 2 倍になる。<br>
  b < a になるのは何年後か。<br>
  
- 発想<br>
  a <= b である間、a を　3　倍、 b を 2　倍し、その回数を数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a, b;
    cin >> a >> b;

    int answer = 0;

    while (a <= b) {

      answer++;

      a *= 3;
      b *= 2;

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

      int answer = 0;

      while (a <= b) {

        answer++;

        a *= 3;
        b *= 2;

      }

      System.out.println(answer);

    }

  }
  ```
    