### Good Bye 2017

# A. New Year and Hurry

  [問題はこちら](https://codeforces.com/problemset/problem/908/A)
  
- 概要<br>
  片面にはアルファベット、もう一方の面には数字が書かれたカードがある。<br>
  カードが何枚か配られる。<br>
  配られたカードの状況 s のみを利用して、「カードの片面が母音である場合、裏面の数値は必ず偶数である」というルールを確認したい。<br>
  最低何枚めくる必要があるか。<br>
  
- 発想<br>
  s のうち、母音の場合に、その裏面の数値が偶数であること、<br>
  s のうち、奇数の場合に、その裏面が母音ではないことを確認する必要がある。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin >> s;

    int answer = 0;

    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o') {
        answer++;
      } else if (s[i] == '1' ||s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
        answer++;
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
      sc.close();

      char[] s = S.toCharArray();

      int answer = 0;

      for (int i = 0; i < s.length; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o') {
          answer++;
        } else if (s[i] == '1' ||s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    