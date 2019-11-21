### Codeforces Round #173 (Div. 2)

# A. Bit++

  [問題はこちら](https://codeforces.com/problemset/problem/282/A)
  
- 概要<br>
  n 回分の操作を表す文字列が与えられる。<br>
  初期値は 0 とする。<br>
  文字列内に ++ があると X を 1 増やす。<br>
  文字列内に -- があると X を 1 減らす。<br>
  n 回操作した後の値を出力せよ。
  
  
- 発想<br>
  ++x か x++ の場合は 1 を加え、<br>
  --x か x-- の場合は 1 を減らす。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if (s == "++X" || s == "X++") {
        answer++;
      } else {
        answer--;
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

      int answer = 0;

      for (int i = 0; i < n; i++) {
        String s = sc.next();
        if (s.equals("++X") || s.equals("X++")) {
          answer++;
        } else {
          answer--;
        }
      }
      sc.close();

      System.out.println(answer);

    }

  }
  ```
    