### Codeforces Beta Round #101 (Div. 2)

# A. Amusing Joke

  [問題はこちら](https://codeforces.com/problemset/problem/141/A)
  
- 概要<br>
  3 つの文字列が与えられる。<br>
  3 つ目の文字列について、1 つ目の文字列と 2 つ目の文字列で使われている文字列の種類と数が同じ場合は YES を、<br>
  そうでない場合は NO を出力せよ。
  
- 発想<br>
  アルファベットの数を管理する配列（要素数は 26 ）を 2 つ用意して、1 つ目と 2 つ目の文字列で使われているアルファベットの文字の数を調べる。<br>
  もう 1 つの配列では 3 つ目の文字列で使われているアルファベットの文字の数を調べる。<br>
  2 つの配列が全く同じであれば YES を、そうでない場合は、 NO を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s, t, r;
    cin >> s >> t >> r;

    string answer = "YES";

    vector<int> countA(26);

    for (int i = 0; i < s.size(); i++) {
      int v =(int) s[i] - 65;
      countA[v]++;
    }

    for (int i = 0; i < t.size(); i++) {
      int v =(int) t[i] - 65;
      countA[v]++;
    }

    vector<int> countB(26);

    for (int i = 0; i < r.size(); i++) {
      int v =(int) r[i] - 65;
      countB[v]++;
    }

    for (int i = 0; i < 26; i++) {
      if (countA[i] != countB[i]){
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
      String S = sc.next();
      String T = sc.next();
      String R = sc.next();
      sc.close();

      char[] s = S.toCharArray();
      char[] t = T.toCharArray();
      char[] r = R.toCharArray();

      int[] countA = new int[26];

      for (int i = 0; i < s.length; i++) {
        int v =(int) s[i] - 65;
        countA[v]++;
      }

      for (int i = 0; i < t.length; i++) {
        int v =(int) t[i] - 65;
        countA[v]++;
      }

      int[] countB = new int[26];

      for (int i = 0; i < r.length; i++) {
        int v =(int) r[i] - 65;
        countB[v]++;
      }

      String answer = "YES";

      for (int i = 0; i < 26; i++) {
        if (countA[i] != countB[i]){
          answer = "NO";
          break;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    