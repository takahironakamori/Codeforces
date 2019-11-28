### Codeforces Round #408 (Div. 2)

# A. Buying A House

  [問題はこちら](https://codeforces.com/problemset/problem/796/A)
  
- 概要<br>
  彼女が村の m の位置に住んでいる。<br>
  その村には、n 個の家があって、1 番目、2 番目の家と10メートルごと均等に並んでいる。<br>
  彼氏の所持金は k であり、彼女のできる限り近くの家を買いたい。<br>
  n 個ある家のうち、1番目の家の価格が a_1 と a_n まで与えられる。<br>
  a_i が 0 の場合は買うことはできない。<br>
  彼氏は彼女の家からどれだけ離れた家を買うことができるか。
  
  
- 発想<br>
  家の価格と所持金を比較して、買うことができる場合は、彼女の家との距離（絶対値）を測る。<br>
  最短距離が回答。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    int answer = 10000;

    for (int i = 1; i <= n; i++) {

      int a;
      cin >> a;

      if (a != 0 && a <= k) {
        answer = min(answer, abs(m - i) * 10);
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
      int m = sc.nextInt();
      int k = sc.nextInt();

      int answer = 10000;

      for (int i = 1; i <= n; i++) {
        int a = sc.nextInt();

        if (a != 0 && a <= k) {
          answer = Math.min(answer, Math.abs(m - i) * 10);
        }

      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    