### Codeforces Round #152 (Div. 2)

# A. Cupboards

  [問題はこちら](https://codeforces.com/problemset/problem/248/A)
  
- 概要<br>
  n 枚のドアの状況が与えられる。<br>
  1 番目は左側のドアの状況で、0 は閉じている、1 は開いている状態。<br>
  2 番目は右側のドアの状況で、0 は閉じている、1 は開いている状態。<br>
  1 回の作業で、1 枚のドアのどちらかを開くまたは閉じることができる。<br>
  右側と左側で同じ状態にしたいとすると、最低何回作業が必要か。
  
  
- 発想<br>
  左右のドアの状態について、<br>
  閉じている状態の数と開いている状態の少ない方の数が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> left(2);
    vector<int> right(2);
    for (int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;
      left[l]++;
      right[r]++;
    }

    cout << min(left[0],left[1]) + min(right[0],right[1]) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int[] left = new int[2];
      int[] right = new int[2];

      for (int i = 0; i < n; i++) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        left[l]++;
        right[r]++;
      }
      sc.close();

      System.out.println(Math.min(left[0],left[1]) + Math.min(right[0],right[1]));

    }

  }
  ```
    