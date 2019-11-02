### VK Cup 2016 - Round 1 (Div. 2 Edition)

# A. Bear and Reverse Radewoosh

  [問題はこちら](https://codeforces.com/problemset/problem/658/A)
  
- 概要<br>
  n 問の問題を Limak は 1 問目から n 問目へ、Radewoosh は n 問目から 1 問目の順番で問題を解く。<br>
  各問題には、p_i の基礎点が設定されている。<br>
  さらに、各問題には、t_i 秒の待機時間が設定されている。仮に t_i 以内に解いたとしても t_i 秒たたないと次の問題へ進めない。<br>
  問題を解くことによって、得られる点数は、0 と p_i - c * x のうち大きい方となる。<br>
  c は定数が与えられる。x はスタートから問題の待機時間終了までの時間である。<br>
  点数が多い方の名前を出力せよ。なお、同点の場合は Tie を出力せよ。 
  
- 発想<br>
  p_i および t_i を配列に入れ、Limak の場合は 0 から、Radewoosh の場合は、n から始めて点数を集計し、比較する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, c;
    cin >> n >> c;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
      cin >> t[i];
    }

    int time = 0;
    int L = 0;
    int R = 0;

    for (int i = 0; i < n; i++) {
      time += t[i];
      L += max(0, p[i] - c * time);
    }

    time = 0;
    for (int i = n - 1; 0 <= i; i--) {
      time += t[i];
      R += max(0, p[i] - c * time);
    }

    if (R == L) {
      cout << "Tie" << endl;
    } else if (R < L) {
      cout << "Limak" << endl;
    } else {
      cout << "Radewoosh" << endl;
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
      int c = sc.nextInt();

      int[] p = new int[n];
      for (int i = 0; i < n; i++) {
        p[i] = sc.nextInt();
      }

      int[] t = new int[n];
      for (int i = 0; i < n; i++) {
        t[i] = sc.nextInt();
      }

      sc.close();

      int time = 0;
      int L = 0;
      int R = 0;

      for (int i = 0; i < n; i++) {
        time += t[i];
        L += Math.max(0, p[i] - c * time);
      }

      time = 0;
      for (int i = n - 1; 0 <= i; i--) {
        time += t[i];
        R += Math.max(0, p[i] - c * time);
      }

      if (R == L) {
        System.out.println("Tie");
      } else if (R < L) {
        System.out.println("Limak");
      } else {
        System.out.println("Radewoosh");
      }

    }

  }
  ```
    