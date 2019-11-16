### Codeforces Round #559 (Div. 2)

# A. A pile of stones

  [問題はこちら](https://codeforces.com/problemset/problem/1159/A)
  
- 概要<br>
  石の山がある。<br>
  石の山に対して、山から石を 1 つ取る（-）、または山に石を 1 つ加える（+）のどちらかの操作を n 回行う。<br>
  n 回操作を行った後の石の数で最も少ない個数は何個か？

  
- 発想<br>
  山の石の数を 0 個からはじめ、- の場合は石の数が 1 以上の場合だけ 1 つ取るして、n 回の操作を行う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int answer = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == '+'){
        answer++;
      } else {
        if (0 < answer) {
          answer--;
        }
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
      String S = sc.next();
      sc.close();

      String[] s = S.split("");

      int answer = 0;

      for (int i = 0; i < n; i++) {
        if (s[i].equals("+")){
          answer++;
        } else {
          if (0 < answer) {
            answer--;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    