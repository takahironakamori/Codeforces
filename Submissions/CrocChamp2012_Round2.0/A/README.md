### Croc Champ 2012 - Round 2 (Unofficial Div. 2 Edition)

# A. Series of Crimes
  
  [問題はこちら](https://codeforces.com/problemset/problem/181/A)
  
- 概要<br>
  n × m のマトリクスがある。<br>
  * が 3 箇所あって、その他は . で与えられる。<br>
  4 箇所の * を結ぶと長方形になるように、4 箇所目の * を入れたい。<br>
  どこに入れたらいいか出力せよ。<br>
  
- 発想<br>
  * が 1 箇所だけある行と列を探して、交わったところが選択すべき場所となる。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int r = 0;
    int c = 0;

    for (int i = 0; i < n; i++) {
      int acount = 0;
      for (int j = 0; j < m; j++) {
        if (v[i][j] == '*') {
          acount++;
        }
      }
      if (acount == 1) {
        r = i;
      }
    }

    for (int i = 0; i < m; i++) {
      int acount = 0;
      for (int j = 0; j < n; j++) {
        if (v[j][i] == '*') {
          acount++;
        }
      }
      if (acount == 1) {
        c = i;
      }
    }

    cout << r + 1 << " " <<  c + 1 << endl;

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

      String[][] v = new String[n][m];
      for (int i = 0; i < n; i++) {
        String V = sc.next();
        v[i] = V.split("");
      }

      sc.close();

      int r = 0;
      int c = 0;

      for (int i = 0; i < n; i++) {
        int acount = 0;
        for (int j = 0; j < m; j++) {
          if (v[i][j].equals("*")) {
            acount++;
          }
        }
        if (acount == 1) {
          r = i;
        }
      }

      for (int i = 0; i < m; i++) {
        int acount = 0;
        for (int j = 0; j < n; j++) {
          if (v[j][i].equals("*")) {
            acount++;
          }
        }
        if (acount == 1) {
          c = i;
        }
      }

      System.out.println((r + 1) + " " + (c + 1));

    }

  }
  ```
    