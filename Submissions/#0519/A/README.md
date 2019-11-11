### Codeforces Round #519 by Botan Investments

# A. Elections

  [問題はこちら](https://codeforces.com/problemset/problem/1043/A)
  
- 概要<br>
  Awruk は選挙に当選したい。<br>
  対立候補は、Elodreip 1人。<br>
  生徒が n 人いて 1 人 k 票与えられている。<br>
  i 番目の生徒は a_i 票を Elodreip に入れることがわかっている。<br>
  残りの票はすべて Awruk に入るとすると、<br>
  Awruk が当選するには、k を最低いくつにすればいいか。

  
- 発想<br>
  Elodreip に投票される数（sum）を集計する。<br>
  a_i の最大値（mx）を取得する。<br>
  i * n - sum が sum より大きくなる i を探す。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int mx = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      mx = max(mx, a);
      sum += a;
    }

    int current = mx;
    bool flg = true;
    while (flg) {
      if (sum < n * current - sum) {
        cout << current << endl;
        flg = false;
      }
      current++;
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

      int mx = 0;
      int sum = 0;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        mx = Math.max(mx, a);
        sum += a;
      }
      sc.close();

      int current = mx;
      boolean flg = true;
      while (flg) {
        if (sum < n * current - sum) {
          System.out.println(current);
          flg = false;
        }
        current++;
      }

    }

  }
  ```
    