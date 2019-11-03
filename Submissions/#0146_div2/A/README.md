### Codeforces Round #146 (Div. 2)

# A. Boy or Girl

  [問題はこちら](https://codeforces.com/problemset/problem/236/A)
  
- 概要<br>
  ユーザー名を意味する文字列（すべて小文字のアルファベット）が与えられる。<br>
  使われている文字の数が偶数の場合は "CHAT WITH HER!" を出力し、<br>
  奇数の場合は、"IGNORE HIM!" を出力せよ。
  
- 発想<br>
  set とかを使って文字列内で使われているアルファベットを集計し、偶奇を判定する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    set<char> st;

    for (int i = 0; i < s.size(); i++) {
      st.insert(s[i]);
    }

    if(st.size() % 2 == 0) {
      cout << "CHAT WITH HER!" << endl;
    } else {
      cout << "IGNORE HIM!" << endl;
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

      String[] s = S.split("");

      Set<String> st = new TreeSet<String>();

      for (int i = 0; i < s.length; i++) {
        st.add(s[i]);
      }

      if (st.size() % 2 == 0) {
        System.out.println("CHAT WITH HER!");
      } else {
        System.out.println("IGNORE HIM!");
      }

    }

  }
  ```
    