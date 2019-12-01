### Educational Codeforces Round 40 (Rated for Div. 2)

# A. Diagonal Walking

  [問題はこちら](https://codeforces.com/contest/954/problem/A)
  
- 概要<br>
  R と U からなる n 個の文字列が与えられる。<br>
  UR または RU と繋がっている文字列はすべて D に置き換える。<br>
  置き換え後の文字数を出力せよ。
  
  
- 発想<br>
  i 番目の文字と i + 1 番目の文字が異なっている場合は、n から 1 減らして、1文字飛ばす。<br>
  これを終わりまで繰り返した後の n が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int answer = n;

    for (int i = 0; i < n - 1; i++) {
      if (s[i] != s[i + 1]){
        i++;
        answer--; 
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

      int answer = n;

      for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]){
          i++;
          answer--; 
        }
      }

      System.out.println(answer);

    }

  }
  ```
    