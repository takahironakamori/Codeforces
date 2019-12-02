### Codeforces Round #480 (Div. 2)

# A. Links and Pearls

  [問題はこちら](https://codeforces.com/problemset/problem/980/A)
  
- 概要<br>
  パール（o）とリンク（-）の状況を示す文字列 s が与えられる。<br>
  文字列 1 文字目と最後の文字をつないでのネックレスを作る。<br>
  パールとリンクの個数は維持しながらの入れ替えは何回でもできる。<br>
  そこで、パールを等間隔に配置したネックレスを作ることができる場合は YES を、<br>
  できない場合は NO を出力せよ。
  
  
- 発想<br>
  リンクの個数をパールの個数で割った余りが 0 であればよい。<br>
  リンクがないまたは、パールがないなら無条件で YES 。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int link = 0;
    int pearl = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'o') {
        pearl++;
      } else {
        link++;
      }
    }

    if (link == 0 || pearl == 0){
      cout << "YES" << endl;
    } else {
      if (link % pearl == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int link = 0;
      int pearl = 0;

      for (int i = 0; i < S.length(); i++) {
        if (s[i] == 'o') {
          pearl++;
        } else {
          link++;
        }
      }

      if (link == 0 || pearl == 0){
        System.out.println("YES");
      } else {
        if (link % pearl == 0) {
          System.out.println("YES");
        } else {
          System.out.println("NO");
        }
      }

    }

  }
  ```
    