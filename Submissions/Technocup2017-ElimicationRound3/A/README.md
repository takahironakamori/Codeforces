### Technocup 2017 - Elimination Round 3

# A. Santa Claus and a Place in a Class

  [問題はこちら](https://codeforces.com/problemset/problem/748/A)
  
- 概要<br>
  n 行、m 列に机が並んでいる。<br>
  机は 2 人掛けであり、以下のルールで番号がつけられている。<br>
  ・1 行 1 列目から数える。<br>
  ・1 行 1 列目には、1 番と 2 番が付される。<br>
  ・2 行 1 列目には、3 番と 4 番が付される。<br>
  ・n 行 1 列目まで番号がつけ終わったら、1行 2列目の番号をつける。
  ・n 行 m 列目までこの作業を続ける。<br>
  番号 k は何行、何列目の右側か左側かを出力せよ。<br>
  なお、番号が小さい方が左側である。
  
  
- 発想<br>
  n と m の上限が 10^4 なので、全探索（2 * 10^8）してもなんとか間に合う。（C++の 1 つ目とJavaのコード）<br>
  また、p = (k - 1) / 2 （小数点以下切り捨て）を求めると、p は、k が座る 1 つ前の机を示す。（-1 することで右でも左でも結果は同じになる）<br>
  この 1つ前の机の位置の次の位置が 座っている机になるので、<br>
  p / m + 1 で行、p % m + 1 で列がわかる。また、k が奇数なら、L 偶数なら R となり、計算量を減らすことができる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    int desks = 0;
    int lanes = 0;
    int count = 0;

    string p = "";

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        for (int l = 0; l < 2; l++) {
          count++;
          if (count == k) {
            desks = i;
            lanes = j;
            if (l == 0) {
              p = "L";
            } else {
              p = "R";
            }
          }
        }
      }
    }

    cout << desks << " " << lanes << " " << p << endl;

  }
  ```
  
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    int p = (k - 1) / 2;

    if (k % 2 == 0) {
      cout << p / m + 1 << " " << p % m + 1 << " R" << endl;
    } else {
      cout << p / m + 1 << " " << p % m + 1 << " L" << endl;
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
      int m = sc.nextInt();
      int k = sc.nextInt();
      sc.close();

      int desks = 0;
      int lanes = 0;
      int count = 0;

      String p = "";

      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
          for (int l = 0; l < 2; l++) {
            count++;
            if (count == k) {
              desks = i;
              lanes = j;
              if (l == 0) {
                p = "L";
              } else {
                p = "R";
              }
            }
          }
        }
      }

      System.out.println(desks + " " + lanes + " " + p);

    }

  }
  ```
    