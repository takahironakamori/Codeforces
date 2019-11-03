### Codeforces Beta Round #46 (Div. 2)

# A. Triangular numbers

  [問題はこちら](https://codeforces.com/problemset/problem/49/A)
  
- 概要<br>
  質問文（?で終わる文字列）が与えられるので、最後の文字が母音（A, E, I, O, U, Y）である場合は YES を、<br>
  そうでない場合は NO を出力せよ。<br>
  ただし、母音は小文字でもいい。<br>
  また、記号や空白は文字に含めない。
  
- 発想<br>
  文字列を 1 行取得し、空白を削除して、末尾から2文字目で母音か否かを判定する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string answer = "NO";

    int i = 1;
    int sum = i;

    while (sum <= n) {
      if (sum == n) {
        answer = "YES";
        sum = n + 1;
      } else {
        i++;
        sum += i;
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

      String answer = "NO";

      int i = 1;
      int sum = i;

      while (sum <= n) {
        if (sum == n) {
          answer = "YES";
          sum = n + 1;
        } else {
          i++;
          sum += i;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    