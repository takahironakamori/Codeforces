### Codeforces Round #164 (Div. 2)

# A. Games

  [問題はこちら](https://codeforces.com/problemset/problem/268/A)
  
- 概要<br>
  n 個のチームのホームゲーム時のユニホームのカラー番号とアウェー時のユニホームのカラー番号が与えられる。<br>
  通常、ホストチームがホームゲーム時のユニホームを来て、対戦相手がアウェー時のユニホームを着る。<br>
  これらのカラーが同じなってしまう試合数は何試合あるか出力せよ。<br>
  
- 発想<br>
  n 個のチームごとに 2 次元配列を用意し、ホーム時とアウェー時のユニホームカラーを保持する。<br>
  ホーム時とアウェー時のカラーが同じになる組み合わせの数を数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> ha(n);
    for (int i = 0; i < n; i++) {
      cin >> ha[i].first >> ha[i].second;
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i != j && ha[i].first == ha[j].second) {
          answer++;
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
      int[][] ha = new int[n][2];
      for (int i = 0; i < n; i++) {
        ha[i][0] = sc.nextInt();
        ha[i][1] = sc.nextInt();
      }
      sc.close();

      int answer = 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (i != j && ha[i][0] == ha[j][1]) {
            answer++;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    