### Codeforces Round #494 (Div. 3) 

# A. Polycarp's Pockets

  [問題はこちら](https://codeforces.com/problemset/problem/1003/A)
  
- 概要<br>
  n 枚のコインを持っている。<br>
  i 枚目のコインの金額は a_i である。<br>
  これらのコインをポケットに入れたいが、同じ種類のコインは入れたくない。<br>
  最低何個のポケットがいるか。
  
- 発想<br>
  a の上限が 100 なので、0 から 100までの配列を作って、種類ごとにコインの枚数を数える。<br>
  配列の中で最大値が必要なポケットの数となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> v(101);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v[a]++;
    }

    int answer = 0;
    for (int i = 1; i <= 100; i++) {
      answer = max(answer, v[i]);
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
      int[] v = new int[101];
      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        v[a]++;
      }
      sc.close(); 

      int answer = 0;
      for (int i = 1; i <= 100; i++) {
        answer = Math.max(answer, v[i]);
      }

      System.out.println(answer);

    }

  }
  ```
    