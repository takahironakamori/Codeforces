### Codeforces Round #178 (Div. 2)

# A. Shaass and Oskols

  [問題はこちら](https://codeforces.com/problemset/problem/294/A)
  
- 概要<br>
  n 本平行に並んでいる電線がある。<br>
  上から i 本目の電線には、a_i 羽の鳥が電線上に並んでいる。<br>
  左から 1, 2 ... a_i 羽いる。
  ある人が m 回銃を撃った。<br>
  i 回目の銃によって、x_i 番目の電線にいる y_i 番目の鳥は撃たれて死んでしまった。<br>
  撃たれた鳥により左にいる鳥は、1 本上の電線に移動し、右にいる鳥は 1 本下に移動した。<br>
  移動する電線がない場合はどこかに飛んでしまう。<br>
  m 回銃を撃った後の各電線に残っている鳥の数はそれぞれ何羽か。
  
  
- 発想<br>
  0 から n + 1 までの配列を用意する。<br>
  m 回、鳥の数を移動させる作業を繰り返す。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n + 2);

    for (int i = 1; i < n + 1; i++) {
      cin >> a[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      a[x - 1] += y - 1; 
      a[x + 1] += a[x] - y;
      a[x] = 0;
    }

    for (int i = 1; i < n+1; i++) {
      cout << a[i] << endl;
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

      int[] a = new int[n + 2];
      for (int i = 1; i < n + 1; i++) {
        a[i] = sc.nextInt();
      }

      int m = sc.nextInt();

      for (int i = 0; i < m; i++) {
        int x = sc.nextInt();
        int y = sc.nextInt();
        a[x - 1] += y - 1; 
        a[x + 1] += a[x] - y;
        a[x] = 0;
      }

      sc.close();

      for (int i = 1; i < n + 1; i++) {
        System.out.println(a[i]);
      }

    }

  }
  ```
    