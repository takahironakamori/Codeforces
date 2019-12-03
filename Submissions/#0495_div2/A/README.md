### Codeforces Round #495 (Div. 2) 

# A. Sonya and Hotels

  [問題はこちら](https://codeforces.com/problemset/problem/1004/A)
  
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

    int n, d;
    cin >> n >> d;

    vector<int> x(n);

    set<int> st;
    for (int i = 0; i < n; i++) {
      cin >> x[i];
      st.insert(x[i] - d);
      st.insert(x[i] + d);
    }

    int answer = 0;

    for (auto v : st) {
      bool flg = true;
      for (int i = 0; i < n; i++) {
        if (abs(x[i] - v) < d) {
          flg = false;
          break;
        }
      }
      if (flg) {
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
      int n = sc.nextInt();
      int d = sc.nextInt();

      int[] x = new int[n];

      Set<Integer> st = new TreeSet<Integer>();
      for (int i = 0; i < n; i++) {
        x[i] = sc.nextInt();
        st.add(x[i] - d);
        st.add(x[i] + d);
      }

      sc.close();

      int answer = 0;

      for (Integer v : st) {
        boolean flg = true;
        for (int i = 0; i < n; i++) {
          if (Math.abs(x[i] - v) < d) {
            flg = false;
            break;
          }
        }
        if (flg) {
          answer++;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    