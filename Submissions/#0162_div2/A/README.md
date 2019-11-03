### Codeforces Round #162 (Div. 2)

# A. Colorful Stones (Simplified Edition)

  [問題はこちら](https://codeforces.com/problemset/problem/265/A)
  
- 概要<br>
  R,G,Bの3種類で構成された文字列 s と t がある。<br>
  s と t の文字列の長さは同じとは限らない。<br>
  t の 1 文字目 と s の 1 文字目が同じだったら、s の 2 文字目へ移動する。<br>
  t の 1 文字目 と s の 1 文字目が事なっていたら、s は 1 文字目のまま。<br>
  t の 1 文字目が終わったら、2 文字目と進んでいき s の現在位置の文字と比較して、同じであれば次の文字へ移動して、異なっていたら s はそのまま...<br>
  t の最後まで上記の作業を行う。<br>
  作業終了時に、s は 何文字目にいるかを出力せよ。
  
- 発想<br>
  上記のシミュレーションをそのまま実装する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s, t;
    cin >> s >> t;

    int answer = 0;
    for (int i = 0; i < t.size(); i++) {
      if (s[answer] == t[i]) {
        answer++;
      }
    }

    cout << answer + 1 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String S = sc.next();
      String T = sc.next();
      sc.close();

      String[] s = S.split("");
      String[] t = T.split("");

      int answer = 0;
      for (int i = 0; i < t.length; i++) {
        if (s[answer].equals(t[i])) {
          answer++;
        }
      }

      System.out.println(answer + 1);

    }

  }
  ```
    