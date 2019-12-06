### Technocup 2019 - Elimination Round 4

# A. Right-Left Cipher

  [問題はこちら](https://codeforces.com/problemset/problem/1085/A)
  
- 概要<br>
  文字列 s を以下の手順で文字列を作る。<br>
  i 文字目の文字を s_i とする。<br> 
  ・s_1 を書く。<br>
  ・s_2 を文字列の最後に書く。<br>
  ・s_3 を文字列の最初に書く。<br>
  ・s_4 を文字列を最後に書く。<br>
  ・s_5 を文字列の最初に書く。<br>
  ...これを s の最後まで続ける。<br>
  例えば、s = techno だったら、t -> te -> cte -> cteh -> ncteh -> ncteho となる。<br>
  作成後の文字列 t が与えられる。<br>
  文字列 s を出力せよ。
  
  
- 発想<br>
  文字列 t の長さが偶数の場合は、最後、最初、最後-1、最初+1、最後-2、... の順で t から文字を抜き出し、結合していく。<br>
  文字列 t の長さが奇数の場合は、最初、最後、最初+1、最後-1、最初+2、... の順で t から文字を抜き出し、結合していく。<br>
  結合した文字列を反転させたのが回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string t;
    cin >> t;

    string answer = "";

    int count1 = 0;
    int count2 = 0;

    for (int i = 1; i <= t.size(); i++) {
      if (t.size() % 2 == 0) {
        if (i % 2 == 1){
          answer += t[t.size() - 1 - count1];
          count1++;
        } else {
          answer += t[count2];
          count2++;
        }
      } else {
        if (i % 2 == 1){
          answer += t[count1];
          count1++;
        } else {
          answer += t[t.size() - 1 - count2];
          count2++;
        }
      }
    }

    reverse(answer.begin(), answer.end());

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      String T = sc.next();
      sc.close();

      String[] t = T.split("");

      String answer = "";

      int count1 = 0;
      int count2 = 0;

      for (int i = 1; i <= t.length; i++) {
        if (t.length % 2 == 0) {
          if (i % 2 == 1){
            answer += t[t.length - 1 - count1];
            count1++;
          } else {
            answer += t[count2];
            count2++;
          }
        } else {
          if (i % 2 == 1){
            answer += t[count1];
            count1++;
          } else {
            answer += t[t.length - 1 - count2];
            count2++;
          }
        }
      }

      StringBuffer sb = new StringBuffer(answer);

      String R = sb.reverse().toString();

      System.out.println(R);

    }

  }
  ```
    