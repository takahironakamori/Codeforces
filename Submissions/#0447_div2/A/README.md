### Codeforces Round #447 (Div. 2)

# A. QAQ

  [問題はこちら](https://codeforces.com/problemset/problem/894/A)
  
- 概要<br>
  文字列 n が与えられる。<br>
  n の中に "QAQ" を何回見つけることができるか。<br>
  Q と A、A と Q との間に別の文字が入ってもかまわない。
  
- 発想<br>
  n の上限が 100 なので、n^3 でも間に合う。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string n;
    cin >> n;

    int answer = 0;
    int count = n.length();

    for (int i = 0; i < count; i++) {
      for (int j = i; j < count; j++) {
        for (int k = j; k < count; k++) {
          if (n[i] == 'Q' && n[j] == 'A' && n[k] == 'Q') {
            answer++;
          }
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
      String N = sc.next();
      sc.close();

      char[] n = N.toCharArray();

      int answer = 0;
      int count = n.length;

      for (int i = 0; i < count; i++) {
        for (int j = i; j < count; j++) {
          for (int k = j; k < count; k++) {
            if (n[i] == 'Q' && n[j] == 'A' && n[k] == 'Q') {
              answer++;
            }
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    