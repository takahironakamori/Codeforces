### Codeforces Round #360 (Div. 2)

# A. Opponents

  [問題はこちら](https://codeforces.com/problemset/problem/688/A)
  
- 概要<br>
  n 人の友達がいる。<br>
  d 回試合をする。<br>
  n 人いる友達のうち、i 回目の試合の出席者は 1、欠席者は 0 で与えられる。<br>
  n 人の友達が全員出席している場合は、勝つことができない。<br>
  1 人でも欠席している場合は、必ず勝つことができる。<br>
  最大、何回連続で勝つことができるか。
  
- 発想<br>
  勝った回数をカウントする。<br>
  連続勝利数を保持する。<br>
  すべて 1 の場合は、それまでの勝った回数と連続勝利数の多い方を保持し、勝った回数をリセットする。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, d;
    cin >> n >> d;

    int answer = 0;
    int win = 0;

    for (int i = 0; i < d; i++) {
      string o;
      cin >> o;
      vector<int> count(2);
      for (int j = 0; j < o.size(); j++) {
        if (o[j] == '0') {
          count[0]++;
        } else {
          count[1]++;
        }
      }
      if (count[1] != n) {
        win++;
      } else {
        answer = max(answer, win);
        win = 0;
      }
    }

    answer = max(answer, win);

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
      int d = sc.nextInt();

      int answer = 0;
      int win = 0;

      for (int i = 0; i < d; i++) {
        String O = sc.next(); 
        String[] o = O.split("");
        int[] count = new int[2];
        for (int j = 0; j < o.length; j++) {
          if (o[j].equals("0")) {
            count[0]++;
          } else {
            count[1]++;
          }
        }
        if (count[1] != n) {
          win++;
        } else {
          answer = Math.max(answer, win);
          win = 0;
        }
      }
      sc.close();

      answer = Math.max(answer, win);

      System.out.println(answer);

    }

  }
  ```
    