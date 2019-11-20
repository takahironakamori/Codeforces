### Codeforces Beta Round #127 (Div. 2)

# A. LLPS

  [問題はこちら](https://codeforces.com/problemset/problem/202/A)
  
- 概要<br>
  アルファベットの小文字だけで構成される文字列 s が与えられる。<br>
  文字列の中で辞書順で最も大きいものを文字列 s 内で使われているだけ出力せよ。
  
- 発想<br>
  使われてるアルファベットの数を保持するための配列を利用する。<br>
  z から順番に、使われている数が 0 以外の文字列を使われている回数だけ出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    vector<int> a(26);
    for (int i = 0; i < s.size(); i++) {
      a[(int) s[i] - 97]++;
    }

    for (int i = 25; 0 <= i; i--) {
      if (a[i] != 0) {
        for (int j = 0; j < a[i]; j++) {
          cout << char(i + 97);
        }
        break;
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
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int[] a = new int[26];
      for (int i = 0; i < s.length; i++) {
        a[(int) s[i] - 97]++;
      }

      for (int i = 25; 0 <= i; i--) {
        if (a[i] != 0) {
          for (int j = 0; j < a[i]; j++) {
            System.out.print(Character.toChars(i + 97));
          }
          break;
        }
      }

      System.out.println("");

    }

  }
  ```
    