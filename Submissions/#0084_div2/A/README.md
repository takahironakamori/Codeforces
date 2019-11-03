### Codeforces Beta Round #84 (Div. 2 Only)

# A. Nearly Lucky Number

  [問題はこちら](https://codeforces.com/problemset/problem/110/A)
  
- 概要<br>
  ラッキーナンバーとは、4 と 7 が使われている回数が 4 か 7 である場合をいう。<br>
  n がラッキーナンバーだったら YES を、違っていたら NO を出力せよ。
  
  
- 発想<br>
  数値だが、文字列として 4 か 7 の個数を数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n.size(); i++) {
      if (n[i] == '7' || n[i] == '4') {
        count++;
      }
    }

    if (count == 7 || count == 4) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String N = sc.next();
      sc.close();

      String[] n = N.split("");

      int count = 0;
      for (int i = 0; i < n.length; i++) {
        if (n[i].equals("7") || n[i].equals("4")) {
          count++;
        }
      }

      if (count == 7 || count == 4) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    