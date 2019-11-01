### Codeforces Round #449 (Div. 2)

# A. Scarborough Fair

  [問題はこちら](https://codeforces.com/problemset/problem/897/A)
  
- 概要<br>
  n 日分の記録が与えられる。<br>
  記録とは、S とあればシアトルに 1 日いたことを示し、F とあればサンフランシスコに 1 日いたことを示し、他の場所には行っていない。<br>
  したがって、SF とあればシアトルからサンフランシスコに移動したことになり、FSとあればサンフランシスコからシアトルに移動したことになる。<br>
  シアトルからサンフランシスコに移動した回数がサンフランシスコからシアトルに移動したより多い場合は YES をそれ以外の場合は NO を出力せよ。
  
- 発想<br>
  S か F しかいなかったので、最初の文字が S 、最後の文字が F だと必ずシアトルからサンフランシスコに移動した回数が多くなる。<br>
  それ以外の場合は、同じかサンフランシスコからシアトルに移動したより多くなる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    for (int i = 0; i < m; i++) {
      int l, r;
      cin >> l >> r;
      char c1, c2;
      cin >> c1 >> c2;
      for (int j = l - 1; j < r; j++) {
        if (s[j] == c1) {
          s[j] = c2;
        }
      }
    }

    cout << s << endl;

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

      String S = sc.next();
      String[] s = S.split("");

      for (int i = 0; i < m; i++) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        String c1 = sc.next();
        String c2 = sc.next();
        for (int j = l - 1; j < r; j++) {
          if (s[j].equals(c1)) {
            s[j] = c2;
          }
        }
      }

      sc.close();

      for (int i = 0; i < n; i++) {
        System.out.print(s[i]);
      }

      System.out.println("");
    }

  }
  ```
    