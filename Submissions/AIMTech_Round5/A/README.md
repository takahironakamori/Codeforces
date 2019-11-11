### AIM Tech Round 5 (rated, Div. 1 + Div. 2)

# A. Find Square
  
  [問題はこちら](https://codeforces.com/problemset/problem/1028/A)
  
- 概要<br>
  n * m の表がある。<br>
  表の中は、奇数行 * 奇数列の B があり、その他は W と表示される。<br>
  B の中央は何行目と何列目にあるかを出力せよ。
  
- 発想<br>
  n * m 内の B の位置と数を数える。<br>
  位置は都度更新することで、B の右下がわかる。<br>
  B の右下の行の位置、列の位置のそれぞれを、ルート B を 2 で割った値で引くと中央となる。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<string> s(n);

    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }

    int answerN = 0;
    int answerM = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (s[i][j] == 'B') {
          answerN = i + 1;
          answerM = j + 1;
          count++;
        }
      }
    }

    int d = sqrt(count) / 2;

    cout << answerN - d << " " << answerM - d << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int m = sc.nextInt();

      String[] S = new String[n];

      for (int i = 0; i < n; i++) {
        S[i] = sc.next();
      }

      sc.close();

      int answerN = 0;
      int answerM = 0;
      int count = 0;

      for (int i = 0; i < n; i++) {
        String[] s = S[i].split("");
        for (int j = 0; j < m; j++) {
          if (s[j].equals("B")) {
            answerN = i + 1;
            answerM = j + 1;
            count++;
          }
        }
      }

      int d =(int) Math.sqrt(count) / 2;

      answerN -= d;
      answerM -= d; 

      System.out.println(answerN + " " + answerM);

    }

  }
  ```
    