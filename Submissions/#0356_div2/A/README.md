### Codeforces Round #356 (Div. 2)

# A. Bear and Five Cards

  [問題はこちら](https://codeforces.com/problemset/problem/680/A)
  
- 概要<br>
  t_1、t_2、t_3、t_4、t_5 の 5 枚のカードが配られる。<br>
  それらのカードを組み合わせて最小値を求めたい。<br>
  ただし、同じ数値のカードがあれば、2 枚か 3 枚を捨てることができる。
  
- 発想<br>
  全部試す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> t(5);
    int mx = 0;

    for (int i = 0; i < 5; i++) {
      cin >> t[i];
      mx += t[i];
    }

    int answer = mx;

    // 2 枚カードを抜き取る場合
    for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
        if (t[i] == t[j]) {
          answer = min(answer, mx - t[i] * 2);
        }
      }
    }

    // 3 枚カードを抜き取る場合
    for (int i = 0; i < 5; i++) {
      for (int j = i + 1; j < 5; j++) {
        for (int k = j + 1; k < 5; k++) {
          if (t[i] == t[j] && t[i] == t[k]) {
            answer = min(answer, mx - t[i] * 3);
          }
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

      int max = 0;

      Scanner sc = new Scanner(System.in);
      int[] t = new int[5];
      for (int i = 0; i < 5; i++) {
        t[i] = sc.nextInt();
        max += t[i];
      }
      sc.close();

      int answer = max;

      // 2 枚カードを抜き取る場合
      for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
          if (t[i] == t[j]) {
            answer = Math.min(answer, max - t[i] * 2);
          }
        }
      }

      // 3 枚カードを抜き取る場合
      for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
          for (int k = j + 1; k < 5; k++) {
            if (t[i] == t[j] && t[i] == t[k]) {
              answer = Math.min(answer, max - t[i] * 3);
            }
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    