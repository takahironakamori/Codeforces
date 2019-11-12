### Codeforces Round #536 (Div. 2)

# A. Lunar New Year and Cross Counting

  [問題はこちら](https://codeforces.com/problemset/problem/1106/A)
  
- 概要<br>
  n * n のマトリクスがあり、"X" と "." のどちらかが記載されている。<br>
  点 M について、点 M が "X" であり、点 M の斜め上と斜め下の計 4 点も "X" である箇所が何箇所あるかを出力せよ。

  
- 発想<br>
  n * n のマトリクスについて、最も外側の 1 周分は調べる意味がない。<br>
  残りのマスを 1 マスずつ X の有無を確認する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<string> M(n);
    for (int i = 0; i < n; i++) {
      cin >> M[i];
    }

    int answer = 0;

    for (int i = 1; i < n - 1; i++) {
      for (int j = 1; j < n - 1; j++) {
        if (M[i][j] == 'X' &&
            M[i - 1][j - 1] == 'X' && 
            M[i - 1][j + 1] == 'X' && 
            M[i + 1][j - 1] == 'X' && 
            M[i + 1][j + 1] == 'X') {
          answer++;
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

      String[][] M = new String[n][n]; 
      for (int i = 0; i < n; i++) {
        String m = sc.next();
        M[i] = m.split("");
      }

      sc.close();

      int answer = 0;

      for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
          if (M[i][j].equals("X") &&
              M[i - 1][j - 1].equals("X") && 
              M[i - 1][j + 1].equals("X") && 
              M[i + 1][j - 1].equals("X") && 
              M[i + 1][j + 1].equals("X")) {
            answer++;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    