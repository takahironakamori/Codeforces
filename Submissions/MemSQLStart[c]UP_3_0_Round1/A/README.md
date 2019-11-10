### MemSQL Start[c]UP 3.0 - Round 1

# A. Declined Finalists

  [問題はこちら](https://codeforces.com/problemset/problem/859/A)
  
- 概要<br>
  コンテスト予選が行われ、予選順位上位25人が決勝戦に招待される。<br>
  辞退者がいた場合は、繰り上げで招待される。<br>
  K 人の決勝進出者のそれぞれの予選順位が与えられる。<br>
  最小で何人辞退したかを出力せよ。
  
- 発想<br>
  予選順位が25以下の人だけで構成されている場合は、辞退者が 0 としか考えられない。<br>
  以上以外の場合は、予選順位の最も大きい人の順位から25を引いた結果が辞退した人の最低数と考えられる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int K;
    cin >> K;

    int m = 0;

    for (int i = 0; i < K; i++) {
      int r;
      cin >> r;
      m = max(m, r);
    }

    if (25 < m) {
      cout << m - 25 << endl;
    } else {
      cout << 0 << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int K = sc.nextInt();

      int m = 0;

      for (int i = 0; i < K; i++) {
        int r = sc.nextInt();
        m = Math.max(m, r);
      }

      sc.close();

      if (25 < m) {
        System.out.println(m - 25);
      } else {
        System.out.println(0);
      }

    }

  }
  ```
    