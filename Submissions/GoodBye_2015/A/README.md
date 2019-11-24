### Good Bye 2015

# A. New Year and Days

  [問題はこちら](https://codeforces.com/problemset/problem/611/A)
  
- 概要<br>
  今日は水曜日である。<br>
  明日は2015年最後の日である。<br>
  2016年に飴をもらえる日を決める。<br>
  文字列が与えれる。<br>
  x of week とあれば、x は 1（月曜日）〜7（日曜日）を示し、毎週 x の日に飴がもらえる。<br>
  x of month とあれば、毎月 x の日に飴がもらえる。<br>
  2016年に飴は何個もらうことができるか。
  
- 発想<br>
  2016年はうるう年であり、金曜日と土曜日が 1 回多い年である。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int count;
    cin >> count;

    string s1, s2;
    cin >> s1 >> s2;

    if (s2 == "week") {
      if (count == 5 || count == 6) {
        cout << 53 << endl;
      } else {
        cout << 52 << endl;
      }
    } else {
      if (count == 31) {
        cout << 7 << endl;
      } else if (count == 30) {
        cout << 11 << endl; 
      } else {
        cout << 12 << endl; 
      }
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int count = sc.nextInt();
      String s1 = sc.next();
      String s2 = sc.next();
      sc.close();

      if (s2.equals("week")) {
        if (count == 5 || count == 6) {
          System.out.println(53);
        } else {
          System.out.println(52);
        }
      } else {
        if (count == 31) {
          System.out.println(7);
        } else if (count == 30) {
          System.out.println(11); 
        } else {
          System.out.println(12); 
        }
      }

    }

  }
  ```
    