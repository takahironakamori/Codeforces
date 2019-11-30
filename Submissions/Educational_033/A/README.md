### Educational Codeforces Round 33

# A. Chess For Three

  [問題はこちら](https://codeforces.com/problemset/problem/893/A)
  
- 概要<br>
  Alex、Bob、Carl の 3 人でチェスをする。<br>
  まず、Alex と Bob がゲームをし、Carl は見学する。<br>
  そして、勝った方と Carl がゲームを、負けた方が見学する。<br>
  次に、勝った方と 見学している人がゲームをして、負けた方が見学する。<br>
  上記をくり返す。<br>
  n 回ゲームを繰り返した結果が与えられる。<br>
  i 回目の 勝者が a_i である。<br>
  a_i の値が 1 の場合は Alex、2 の場合は Bob、3 の場合は Carl が勝者であることを意味する。<br>
  与えられた結果が、上記のルールを満たしている場合は YES を、そうでない場合は NO を出力せよ。
   
  
- 発想<br>
  参加者と見学者を毎回管理する。<br>
  a_i が見学者と同じ値だと矛盾するので NO を出力する。<br>
  n 回分確認して、矛盾がなければ YES を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    string answer = "YES";

    // participate
    int p1 = 1;
    int p2 = 2;

    // spectating
    int s = 3;

    for (int i = 0; i < n; i++) {
      if (a[i] == s) {
        answer = "NO";
        break;
      } else {
        if (a[i] == p1) {
          swap(p2, s);
        } else {
          swap(p1, s);
        }
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

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }

      sc.close();

      String answer = "YES";

      // participate
      int p1 = 1;
      int p2 = 2;

      // spectating
      int s = 3;

      for (int i = 0; i < n; i++) {
        if (a[i] == s) {
          answer = "NO";
          break;
        } else {
          if (a[i] == p1) {
            int p2_ = p2;
            p2 = s;
            s = p2_;
          } else {
            int p1_ = p1;
            p1 = s;
            s = p1_;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    