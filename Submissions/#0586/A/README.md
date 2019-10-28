### Codeforces Round #586 (Div. 1 + Div. 2)

# A. Cards

  [問題はこちら](https://codeforces.com/problemset/problem/1220/A)
  
- 概要<br>
  n 文字の文字列が与えられる。<br>
  文字列は、z, e, r, o, n で構成され、順番はバラバラ。<br>
  文字列を、組み合わせると zero か one をそれぞれ何個か作ることができ、その際、余り文字がない。<br>
  この文字列を zero と one に復元すると zero を 0, one を 1 にすると、 2 進数として表現することができる。<br>
  この場合の最大になる 2 進数は何か？
  
  
- 発想<br>
  z の数が 0 の数になり、n の数が 1 の数になる。<br>
  文字列を並び替えたら、z より先に n が並ぶので、n の個数だけ 1 を並べ、<br>
  z の個数だけ 0 が並ぶと最大の 2 進数となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
      if (s[i] == 'n') {
        cout << 1 << " ";
      } else if (s[i] == 'z') {
        cout << 0 << " ";
      }
    }

    cout << endl;
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

      Arrays.sort(s);

      for (int i = 0; i < n; i++) {
        if (s[i].equals("n")) {
          System.out.print("1" + " ");
        } else if (s[i].equals("z")) {
          System.out.print("0" + " ");
        }
      }

      System.out.println("");

    }

  }
  ```
    