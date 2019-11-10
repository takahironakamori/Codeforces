### Codeforces Round #424 (Div. 2, rated, based on VK Cup Finals)

# B. Keyboard Layouts

  [問題はこちら](https://codeforces.com/problemset/problem/831/B)
  
- 概要<br>
  2 種類のキーボードがある。<br>
  これらのキーボードは、アルファベットのキーボードのレイアウトが違うだけである。<br>
  キーボードのレイアウトが 1 行になって 2 パターン与えられる。<br>
  最初のキーボード入力した内容が与えられるので、後のキーボードで同じ入力をした結果を出力せよ。
  
- 発想<br>
  最初のキーボードと後のキーボードの対応関係を作る。<br>
  大文字もあるので気をつける。<br>
  アルファベット以外はそのまま出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string A, B, C;
    cin >> A >> B >> C;
    map<char, char> mp;

    for (int i = 0; i < 26; i++) {
      int a = (int) A[i];
      int b = (int) B[i];
      mp[char(a)] = char(b);
      mp[char(a - 32)] = char(b - 32);
    }

    for (int i = 0; i < C.length(); i++) {
      int c = (int) C[i];
      if (65 <= c && c <= 90) {
        cout << mp[C[i]];
      } else if (97 <= c && c <= 122) {
        cout << mp[C[i]];
      } else {
        cout << C[i];
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
      String a = sc.next();
      String b = sc.next();
      String c = sc.next();
      sc.close();

      TreeMap<String, String> mp = new TreeMap<>();

      char[] A = a.toCharArray();
      char[] B = b.toCharArray();
      char[] C = c.toCharArray();
      String[] C2 = c.split("");

      for (int i = 0; i < 26; i++) {
        int intA = (int) A[i];
        int intB = (int) B[i];
        String sA = String.valueOf(Character.toChars(intA));
        String sB = String.valueOf(Character.toChars(intB));
        String lA = String.valueOf(Character.toChars(intA - 32));
        String lB = String.valueOf(Character.toChars(intB - 32));
        mp.put(sA, sB);
        mp.put(lA, lB);
      }

      for (int i = 0; i < C.length; i++) {
        int intC = (int) C[i];
        if (65 <= intC && intC <= 90) {
          System.out.print(mp.get(C2[i]));
        } else if (97 <= intC && intC <= 122) {
          System.out.print(mp.get(C2[i]));
        } else {
          System.out.print(C2[i]);
        }

      }

      System.out.println("");

    }

  }
  ```
    