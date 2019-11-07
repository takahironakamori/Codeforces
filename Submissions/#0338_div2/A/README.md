### Codeforces Round #338 (Div. 2)

# A. Bulbs

  [問題はこちら](https://codeforces.com/problemset/problem/615/A)
  
- 概要<br>
  クリスマスのライトに m のボルトがある。最初はすべてオフになっている。<br>
  n 個のボタンがあり、それぞれボルトと繋がっていて、ボタンを押すとボルトがオンになる。<br>
  すべてのボルトをオンすることができますか。
  
- 発想<br>
  ボタンを繋がっているボルトが、1 から m まであるか否かを判定する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      for (int j = 0; j < x; j++) {
        int v;
        cin >> v;
        a[v-1]++;
      }
    }

    string answer = "YES";

    for (int i = 0; i < m; i++) {
      if (a[i] == 0) {
        answer = "NO";
        break;
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
      int m = sc.nextInt();
      int[] a = new int[m];
      for (int i = 0; i < n; i++) {
        int x = sc.nextInt();
        for (int j = 0; j < x; j++) {
          int v = sc.nextInt();
          a[v-1]++;
        }
      }
      sc.close();

      String answer = "YES";

      for (int i = 0; i < m; i++) {
        if (a[i] == 0) {
          answer = "NO";
          break;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    