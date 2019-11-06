### Codeforces Round #253 (Div. 2)

# A. Anton and Letters

  [問題はこちら](https://codeforces.com/problemset/problem/443/A)
  
- 概要<br>
  以下の条件で、アルファベット（小文字）が 0 文字以上、1 行で与えられる。<br>
  ・最初は { で始まり、最後は } で終わる。<br>
  ・アルファベット（小文字）が複数ある場合は、", "（コンマと半角スペース）で区切られる。<br>
  何種類のアルファベットが使われているかを出力せよ。
  
- 発想<br>
  1行まとめて入力で取得する。<br>
  1文字ずつASCIIコードを調べて、a（97）〜 z（122）内であれば、set に追加する。<br>
  全ての文字の確認が終わったら、set の size を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    getline(cin, s);

    set<char> st;

    for (int i = 0; i < s.length(); i++) {
      int n = (int) s[i];
      if (97 <= n && n <= 122) {
        st.insert(s[i]);
      }
    }

    cout << st.size() << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String S = sc.nextLine();
      sc.close();

      Set<String> st = new TreeSet<String>();
      char[] s = S.toCharArray();

      for (int i = 0; i < s.length; i++) {
        int n = (int) s[i];
        if (97 <= n && n <= 122) {
          st.add(String.valueOf(s[i]));
        }
      }

      System.out.println(st.size());

    }

  }
  ```
    