### Educational Codeforces Round 71 (Rated for Div. 2)

# A. There Are Two Types Of Burgers

  [問題はこちら](https://codeforces.com/problemset/problem/1207/A)
  
- 概要<br>
  ハンバーガーとチキンバーガーの 2 種類のハンバーガーを売っているレストランがある。<br>
  1 個 h ドルのハンバーガーはバンズを 2 枚、ビーフパティを 1 枚使う。<br>
  1 個 c ドルのチキンバーガーはバンズを 2 枚、チキン を 1 枚使う。<br>
  バンズが b 枚、ビーフパティが p 枚、チキンが f 枚ある場合、最大の売り上げはいくらになるか。<br>
  
- 発想<br>
  ハンバーガーとチキンバーガーで単価が高い方を優先して材料を使う。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
      int b, p, f, h, c;
      cin >> b >> p >> f >> h >> c;

      int answer = 0;

      if (c <= h) {
        if (p * 2 <= b) {
          b -= p * 2;
          answer += p * h;
        } else {
          answer += (b / 2) * h;
          b = 0;
        }
        if (f * 2 <= b) {
          answer += f * c;
        } else {
          answer += (b / 2) * c;
        }
      } else {
        if (f * 2 <= b) {
          b -= f * 2;
          answer += f * c;
        } else {
          answer += (b / 2) * c;
          b = 0;
        }
        if (p * 2 <= b) {
          answer += p * h;
        } else {
          answer += (b / 2) * h;
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
      int t = sc.nextInt();

      for (int i = 0; i < t; i++) {
        int b = sc.nextInt();
        int p = sc.nextInt();
        int f = sc.nextInt();
        int h = sc.nextInt();
        int c = sc.nextInt();

        int answer = 0;

        if (c <= h) {
          if (p * 2 <= b) {
            b -= p * 2;
            answer += p * h;
          } else {
            answer += (b / 2) * h;
            b = 0;
          }
          if (f * 2 <= b) {
            answer += f * c;
          } else {
            answer += (b / 2) * c;
          }
        } else {
          if (f * 2 <= b) {
            b -= f * 2;
            answer += f * c;
          } else {
            answer += (b / 2) * c;
            b = 0;
          }
          if (p * 2 <= b) {
            answer += p * h;
          } else {
            answer += (b / 2) * h;
          }
        }

        System.out.println(answer);
      }

      sc.close();
    }

  }
  ```
    