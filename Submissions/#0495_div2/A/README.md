### Codeforces Round #495 (Div. 2) 

# A. Sonya and Hotels

  [問題はこちら](https://codeforces.com/problemset/problem/1004/A)
  
- 概要<br>
  一直線上にホテルが n 軒ある。<br>
  ある点を 0 とすると、i 番目にあるホテルの位置は、x_i である。<br>
  どれかのホテルと距離が d である場所に新しいホテルを建てたい。<br>
  その場合、選んだホテルを除く他の全てのホテルとの距離は d 以上でなければならない。<br>
  建てることができる場所は何箇所あるか。
  
  
- 発想<br>
  x_i について、d 足した距離と d 引いた距離を保持しておき、<br>
  x_i 以外のすべての x との距離が d 以上であれば、回答に 1 加える。
  
  
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
    