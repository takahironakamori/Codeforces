### Codeforces Round #385 (Div. 2)

# A. Hongcow Learns the Cyclic Shift

  [問題はこちら](https://codeforces.com/problemset/problem/745/A)
  
- 概要<br>
  文字列 s が与えられる。<br>
  この文字列の最後の文字を文字列の最初に移動する作業を何回も行うことができる。<br>
  例：abracadabra が aabracadabr にしたり、raabracadab にする。<br>
  文字列は何種類作ることができるか。
  
  
- 発想<br>
  s = "abcd" で考える。<br>
  "abcd" に "abcd" を加える。"abcdabcd" となる。<br>
  "abcdabcd" について、1文字目から4文字、2文字目から4文字、3文字目から4文字と文字列を作る。<br>
  "abcd","bcda","cdab"... となる。<br>
  作った文字列を set に入れる。<br>
  set の size が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int l = s.size();
    s += s;

    set<string> st;
    for (int i = 0; i < l; i++) {
      string tmp;
      for (int j = 0; j < l; j++) {
        tmp += s[i+j];
      }
      st.insert(tmp);
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
      String S = sc.next();
      sc.close();

      int l = S.length();
      S += S;
      String[] s = S.split("");

      Set<String> st = new TreeSet<String>();
      for (int i = 0; i < l; i++) {
        String tmp = "";
        for (int j = 0; j < l; j++) {
          tmp += s[i+j];
        }
        st.add(tmp);
      }

      System.out.println(st.size());

    }

  }
  ```
    