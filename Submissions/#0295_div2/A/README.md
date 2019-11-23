### Codeforces Round #295 (Div. 2)

# A. Pangram

  [問題はこちら](https://codeforces.com/problemset/problem/520/A)
  
- 概要<br>
  n 文字の大文字・小文字のアルファベットで構成される文字列が与えらえる。<br>
  アルファベットのすべての種類（大文字・小文字は問わない）が使われている場合は、YES を、<br>
  そうでない場合は、NO を出力せよ。
  
  
- 発想<br>
  1 文字ずつアルファベットを数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> count(26);
    for (int i = 0; i < s.size(); i++) {
      int s_ =(int) s[i];
      if (65 <= s_ && s_ <= 90) {
        count[s_ - 65]++;
      } else {
        count[s_ - 97]++;
      }
    }

    string answer = "YES";

    for (int i = 0; i < 26; i++) {
      if (count[i] == 0) {
        answer = "NO";
        break;
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
      int n = sc.nextInt();
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int[] count = new int[26];

      for (int i = 0; i < n; i++) {
        int s_ =(int) s[i];
        if (65 <= s_ && s_ <= 90) {
          count[s_ - 65]++;
        } else {
          count[s_ - 97]++;
        }
      }

      String answer = "YES";

      for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
          answer = "NO";
          break;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    