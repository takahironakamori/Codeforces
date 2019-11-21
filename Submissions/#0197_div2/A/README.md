### Codeforces Round #197 (Div. 2)

# A. Helpful Maths

  [問題はこちら](https://codeforces.com/problemset/problem/339/A)
  
- 概要<br>
  1, 2, 3, + のみを使って、足し算のパターン（例：2+3+1）が与えられる。<br>
  この足し算を、昇順の足し算に変換して出力せよ。<br>
  例：2+3+1 は 1+2+3 になる。<br>
  
  
- 発想<br>
  1, 2, 3 がそれぞれ何回使われているかを数えて、<br>
  1 から順番に回数分 + をつけて文字列に足していく。<br>
  最後に末尾の + を削除する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    vector<int> count(4);
    for (int i = 0; i < s.size(); i++) {
      if (i % 2 == 0) {
        count[(int) s[i] - '0']++;
      }
    }

    string answer = "";

    for (int i = 1; i < 4; i++) {
      for (int j = 0; j < count[i]; j++) {
        answer += to_string(i) + "+";
      }
    }

    cout << answer.substr(0, answer.size() - 1) << endl;

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

      int[] count = new int[4];
      for (int i = 0; i < s.length; i++) {
        if (i % 2 == 0) {
          count[Integer.parseInt(s[i])]++;
        }
      }

      String answer = "";

      for (int i = 1; i < 4; i++) {
        for (int j = 0; j < count[i]; j++) {
          answer += String.valueOf(i) + "+";
        }
      }

      System.out.println(answer.substring(0, answer.length() - 1));

    }

  }
  ```
    