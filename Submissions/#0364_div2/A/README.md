### Codeforces Round #364 (Div. 2)

# A. Cards

  [問題はこちら](https://codeforces.com/problemset/problem/701/A)
  
- 概要<br>
  n 枚（偶数）のカードがある。<br>
  カードには数値が書かれている。<br>
  これを 1 人 2 枚ずつ配る。<br>
  数値の合計が全て同じのように配るには、何枚目と何枚目のカードを配ったらいいかを出力せよ。
  
  
- 発想<br>
  カードの値と何枚目なのかを保持する。<br>
  カードの値で並び替え、両端から順番にカードを渡せばいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> card(n);

    for (int i = 0; i < n; i++) {
      cin >> card[i].first;
      card[i].second = i + 1;
    }

    sort(card.begin(), card.end());

    for (int i = 0; i < n / 2; i++) {
      cout << card[i].second;
      cout << " ";
      cout << card[n - 1 - i].second << endl;
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

      int[][] card = new int[n][2];

      for (int i = 0; i < n; i++) {
        card[i][0] = sc.nextInt();
        card[i][1] = i + 1;
      }
      sc.close();

      Arrays.sort(card, (a, b) -> Integer.compare(a[0],b[0]));

      for (int i = 0; i < n / 2; i++) {
        System.out.println(card[i][1] + " " + card[n - 1 - i][1]);
      }

    }

  }
  ```
    