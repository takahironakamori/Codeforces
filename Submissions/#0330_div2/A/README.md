### Codeforces Round #330 (Div. 2)

# A. Vitaly and Night

  [問題はこちら](https://codeforces.com/problemset/problem/595/A)
  
- 概要<br>
  n 階建て 1 階あたり m 部屋あり、1 部屋あたり 2 枚の窓がある。<br>
  どちらかの窓の灯りが付いていれば、その部屋の人は寝ていないと判断する。<br>
  寝ていない部屋は何部屋あるか。
  
  
- 発想<br>
  各部屋のどちらかの窓が空いていればその部屋は寝ていないと判断する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    int count = 0;
    for (int i = 0; i < n; i++) {  
      for (int j = 0; j < m; j++) {
        int l, r;
        cin >> l >> r;
        if (l == 1 || r == 1) {
          count++;
        }
      }
    }

    cout << count << endl;

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

      int count = 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          int l = sc.nextInt();
          int r = sc.nextInt();
          if (l == 1 || r == 1) {
            count++;
          }
        }
      }

      sc.close();

      System.out.println(count);

    }

  }
  ```
    