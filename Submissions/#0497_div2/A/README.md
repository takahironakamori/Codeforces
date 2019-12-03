### Codeforces Round #497 (Div. 2) 

# A. Romaji

  [問題はこちら](https://codeforces.com/problemset/problem/1008/A)
  
- 概要<br>
  英小文字で構成する文字列 s が Berlanese か否かを判定せよ。<br>
  Berlanese の特徴は、以下を満たす文字列である。<br>
  ・母音は、a, o, u, i, e で、それ以外は子音である。<br>
  ・子音の次は母音が必ず 1 文字続く。ただし、nを除く。
  
  
- 発想<br>
  i 文字目が n 以外の子音で、前の文字が子音である場合は、NO となる。<br>
  最後の文字が n 以外の子音である場合は、NO となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    string answer = "YES";

    // true:前の文字が子音 false:子音ではない
    bool flg = false;

    // true:前の文字がn false:nではない
    bool isN = false;

    for (int i = 0; i < s.size(); i++) {
      if (flg) {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e') {
          if (!isN) {
            answer = "NO";
            break;
          }
        } else {
          flg = false;
        }
      } else {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e') {
          flg = false;
        } else {
          flg = true;
        }
      }
      if (s[i] == 'n') {
        isN = true;
      } else {
        isN = false;
      }
    }

    if (flg) {
      if (!isN) {
        answer = "NO";
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
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      String answer = "YES";

      // true:前の文字が子音 false:子音ではない
      boolean flg = false;

      // true:前の文字がn false:nではない
      boolean isN = false;

      for (int i = 0; i < s.length; i++) {
        if (flg) {
          if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e') {
            if (!isN) {
              answer = "NO";
              break;
            }
          } else {
            flg = false;
          }
        } else {
          if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e') {
            flg = false;
          } else {
            flg = true;
          }
        }
        if (s[i] == 'n') {
          isN = true;
        } else {
          isN = false;
        }
      }

      if (flg) {
        if (!isN) {
          answer = "NO";
        }
      }

      System.out.println(answer);

    }

  }
  ```
    