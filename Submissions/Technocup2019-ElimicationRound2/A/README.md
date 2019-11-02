### Technocup 2019 - Elimination Round 2

# A. Golden Plate

  [問題はこちら](https://codeforces.com/problemset/problem/1031/A)
  
- 概要<br>
  w * h のマス目がある。<br>
  外側から 1 周分のマスの数を加える、内側に 1 マス移動した 1 周分は加えず、次の 内側に 1 マス移動した 1 周分のマスは繰り返すと、<br>
  加える作業を k 回行うまで繰り返す。<br>
  加えたマスの合計を求めなさい。
  
- 発想<br>
  k 回加えると考えると、加える、加えない、加える...と すなわち k * 2 - 1 回ループすると考える。<br>
  ループする回数を i とすると、マスの数は、w と h の両方から 2 * i - 1 を引き、足しわせたものから 2 を引いたものの 2 倍となる。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int w, h, k;
    cin >> w >> h >> k;

    int answer = 0;
    k = k * 2 - 1;
    for (int i = 1; i <= k; i++) {
      if (i % 2 == 1) {
        int d = 2 * i - 2;
        answer += (w - d + h - d - 2) * 2;
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
      int w = sc.nextInt();
      int h = sc.nextInt();
      int k = sc.nextInt();
      sc.close();

      int answer = 0;
      k = k * 2 - 1;
      for (int i = 1; i <= k; i++) {
        if (i % 2 == 1) {
          int d = 2 * i - 2;
          answer += (w - d + h - d - 2) * 2;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    