### Codeforces Round #538 (Div. 2)

# A. Got Any Grapes?

  [問題はこちら](https://codeforces.com/problemset/problem/1114/A)
  
- 概要<br>
  green, purple, black の 3 種類のぶどうがある。<br>
  Andrew, Dmitry, Michal の 3 人がいる。<br>
  Andrew は、green のぶどうしか食べない。<br>
  Dmitry は、black 以外のぶどうを食べる。<br>
  Michal は、どのぶどうも食べる。<br>
  Andrew, Dmitry, Michal の 3 人が食べたいぶどうの数が、それぞれ x, y, z として与えらえる。<br>
  green, purple, black の 3 種類のぶどうの数が、それぞれ a, b, c として与えれる。<br>
  3 人全員が食べたいぶどうの数を食べることができる場合は、YES を、できない場合は NO を出力せよ。

  
- 発想<br>
  x ≦ a でなければ条件を満たさない。<br>
  y ≦ a + b - x でなければ条件を満たさない。<br>
  z ≦ a + b + c - x - y でなければ条件を満たさない。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    string answer = "YES";

    if (a < x) {
      answer = "NO";
    }

    if ((a + b) - x < y) {
      answer = "NO";
    }

    if ((a + b + c - x - y) < z) {
      answer = "NO";
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
      int x = sc.nextInt();
      int y = sc.nextInt();
      int z = sc.nextInt();
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();
      sc.close();

      String answer = "YES";

      if (a < x) {
        answer = "NO";
      }

      if ((a + b) - x < y) {
        answer = "NO";
      }

      if ((a + b + c - x - y) < z) {
        answer = "NO";
      }

      System.out.println(answer);

    }

  }
  ```
    