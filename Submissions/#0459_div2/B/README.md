### Codeforces Round #459 (Div. 2)

# B. Radio Station

  [問題はこちら](https://codeforces.com/problemset/problem/918/B)
  
- 概要<br>
  n 個のサーバ情報が与えられる。<br>
  サーバ情報には、サーバ名（英小文字）、ipアドレスがある。<br>
  m 回のコマンドを打つ。<br>
  コマンドは、"コマンド名（英小文字） ipアドレス;" で構成される。<br>
  コマンドについて、"コマンド名（英小文字） ipアドレス; #サーバ名" にして出力せよ。
  "#サーバ名" は、コマンド内の ip アドレスと同じ ip アドレスのサーバ名とする。
  
- 発想<br>
  連想配列を mp<ipアドレス> = サーバ名 として管理する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < n; i++) {
      string a, b;
      cin >> a >> b;
      b += ";";
      mp[b] = a;
    }

    for (int i = 0; i < m; i++) {
      string c, d;
      cin >> c >> d;
      cout << c << " " << d << " #" << mp[d] << endl;
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

      TreeMap<String, String> mp = new TreeMap<>();

      for (int i = 0; i < n; i++) {
        String a = sc.next();
        String b = sc.next();
        b += ";";
        mp.put(b, a);
      }

      for (int i = 0; i < m; i++) {
        String c = sc.next();
        String d = sc.next();
        System.out.println(c + " " + d + " #" + mp.get(d));
      }

      sc.close();

    }

  }
  ```
    