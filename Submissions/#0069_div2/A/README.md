### Codeforces Beta Round #69 (Div. 2)

# A. Panoramix's Prediction

  [問題はこちら](https://codeforces.com/problemset/problem/80/A)
  
- 概要<br>
  整数 x と y が与えられる。<br>
  y が x の次の素数である場合は、YESを、そうでない場合は NO を出力せよ。
  
  
- 発想<br>
  x+1 から y まで順番に素数であるか否かを判定し、<br>
  素数である場合は y と同じであるか否かを判定する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  bool is_prime(int N) {
    for (int i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        return false;
      }
    }
    return N != 1;
  }

  int main() {

    int x, y;
    cin >> x >> y;

    string answer = "NO";

    for (int i = x + 1; i <= y; i++) {
      if (is_prime(i)) {
        if (i == y) {
          answer = "YES";
        }
        break;
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
      int x = sc.nextInt();
      int y = sc.nextInt();
      sc.close();

      String answer = "NO";

      for (int i = x + 1; i <= y; i++) {
        if (is_prime(i)) {
          if (i == y) {
            answer = "YES";
          }
          break;
        }
      }

      System.out.println(answer);

    }

    static boolean is_prime (int N) {
      for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
          return false;
        }
      }
      return N != 1;
    }

  }
  ```
    