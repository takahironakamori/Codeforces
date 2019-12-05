### Codeforces Round #505 (rated, Div. 1 + Div. 2, based on VK Cup 2018 Final)

# A. Doggo Recoloring

  [問題はこちら](https://codeforces.com/problemset/problem/1025/A)
  
- 概要<br>
  n 個の色の情報が文字列として与えらえる。<br>
  各色は英小文字 1 文字で表示している。<br>
  これらの色を 2 色以下にしたい。<br>
  変更回数には制限はないが、最低 2 個以上あるものしか変更できない。<br>
  2 色以下に変更できる場合は、Yes を、できない場合は No を出力せよ。
  
  
- 発想<br>
  n 個の文字がすべて同じであれば、変更なしで Yes となる。<br>
  すべての色が 1 個しかない場合のみ、色を変更することができないので No となる。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    string answer = "Yes";

    set<string> st;
    for (int i = 0; i < n; i++) {
      st.insert(s.substr(i,1));
    }

    if (st.size() == n && st.size() != 1) {
      answer = "No";
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
      String S = sc.next();
      sc.close();

      String answer = "Yes";

      String[] s = S.split("");

      Set<String> st = new TreeSet<String>();

      for (int i = 0; i < n; i++) {
        st.add(s[i]);
      }

      if (st.size() == n && st.size() != 1) {
        answer = "No";
      }

      System.out.println(answer);

    }

  }
  ```
    