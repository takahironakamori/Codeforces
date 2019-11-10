### Educational Codeforces Round 43 (Rated for Div. 2)

# A. Minimum Binary Number

  [問題はこちら](https://codeforces.com/problemset/problem/976/A)
  
- 概要<br>
  0 と 1 で構成する n 文字の文字列が与えられる。<br>
  この文字列について、以下のどちらかの操作を行う。<br>
  ・0 と 1 の位置を入れ替える。<br>
  ・1 1 と 2 つ並んだ 1 を 1 つの 1 に置き換える。<br>
  これらの操作をできなくなるまで行う場合、最終的な文字列を出力せよ。
  
- 発想<br>
  文字列が 0 の場合は、0 を出力する。<br>
  上記以外の場合は、最終的には 1 が 1 つだけ、0 は文字列内の 0 の個数となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v(2);

    for (int i = 0; i < n; i++) {
      int l = s[i] - '0';
      v[l]++;
    }

    if (s == "0") {
      cout << "0" << endl;
    } else {
      cout << "1";
      for (int i = 0; i < v[0]; i++) {
        cout << "0";
      }
      cout << endl;
    }

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

      int[] v = new int[2];

      for (int i = 0; i < n; i++) {
        int l = Integer.valueOf(s[i]);
        v[l]++;
      }

      if (S.equals("0")) {
        System.out.println("0");
      } else {
        System.out.print("1");
        for (int i = 0; i < v[0]; i++) {
          System.out.print("0");
        }
        System.out.println("");
      }

    }

  }
  ```
    