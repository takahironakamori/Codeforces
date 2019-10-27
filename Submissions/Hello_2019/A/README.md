### Hello 2019

# A. Gennady and a Card Game

  [問題はこちら](https://codeforces.com/problemset/problem/1097/A)
  
- 概要<br>
  トランプ（ジョーカーを除いた 52 枚）カードゲームを行う。<br>
  ・テーブルに 1 枚、プレイヤーにカード 5 枚が配られる。<br>
  ・カードを 2 文字の文字列で表現する。1 文字目が、数字（2〜9,JQKA）、2 文字目はカードの種類の頭文字（D,C,S,H）<br>
  ・5 枚のカードをうち、テーブルのカードと同じ数値か同じ種類のカードがあれば、"YES"、なければ"NO"を出力せよ。
  
  
- 発想<br>
  1 文字か 2 文字目が同じカードがあるかを調べる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string t;
    cin >> t;

    string answer = "NO";

    for (int i = 0; i < 5; i++) {
      string card;
      cin >> card;
      if (t[0] == card[0] || t[1] == card[1]) {
        answer = "YES";
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
      String T = sc.next();

      String [] t = T.split("");

      String answer = "NO";

      for (int i = 0; i < 5; i++) {
        String Card = sc.next();
        String [] card = Card.split("");
        if (t[0].equals(card[0]) || t[1].equals(card[1])) {
          answer = "YES";
          break;
        }
      }

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    