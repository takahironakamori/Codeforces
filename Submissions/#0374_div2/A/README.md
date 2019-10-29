### Codeforces Round #374 (Div. 2)

# A. One-dimensional Japanese Crossword

  [問題はこちら](https://codeforces.com/problemset/problem/721/A)
  
- 概要<br>
  n 文字の文字列が与えられる。<br>
  文字列は B と W の 2 種類。<br>
  1文字以上、B が連続している場合はこれらを 1 つのまとまりと見る。<br>
  n 文字の中で B のまとまりの個数と、まとまりがどのように並んでいるかを出力せよ。
  
- 発想<br>
  文字列 n の中で B を数える。<br>
  B から W に変わったときに、それまでの B のカウントをキューに入れる。<br>
  文字列 n の最後の文字が B の場合は、最後の文字のところで、それまで数えた B のカウントをキューに入れる。<br>
  キューのサイズがまとまりの個数となる。
  まとまりの個数が 1 以上の場合、キューの中身を順番に出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    queue<int> groupB;

    int countB = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        countB++;
      } else {
        if (0 < countB) {
          groupB.push(countB);
        }
        countB = 0;
      }
      if (i == n - 1) {
        if (0 < countB) {
          groupB.push(countB);
        }
      }
    }

    cout << groupB.size() << endl;

    if (0 < groupB.size()) {

      while (!groupB.empty()) {
        cout << groupB.front() << " ";
        groupB.pop();
      }

      cout << endl;

    }

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

      Queue<Integer> groupB = new ArrayDeque<>();

      int countB = 0;

      for (int i = 0; i < n; i++) {
        if (s[i].equals("B")) {
          countB++;
        } else {
          if (0 < countB) {
            groupB.add(countB);
          }
          countB = 0;
        }
        if (i == n - 1) {
          if (0 < countB) {
            groupB.add(countB);
          }
        }
      }

      System.out.println(groupB.size());

      if (0 < groupB.size()) {

        while (!groupB.isEmpty()) {
          Integer v = groupB.poll();
          System.out.print(v + " ");
        }

        System.out.println("");

      }

    }

  }
  ```
    