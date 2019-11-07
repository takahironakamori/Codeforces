### Educational Codeforces Round 3

# A. USB Flash Drives

  [問題はこちら](https://codeforces.com/problemset/problem/609/A)
  
- 概要<br>
  n 個の USBメモリを持っていて、容量は a_1, a_2, a_3,... a_n MB である。<br>
  m MBのファイルを保存したい場合、最低何個のUSBメモリを使うか。<br>
  ファイルは分割できる。
  
- 発想<br>
  USB メモリを容量の大きい順に並び替えて、m MBを順番に減らしていく。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end(), std::greater<int>());

    int answer = 0;
    for (int i = 0; i < n; i++) {
      if (0 < m) {
        answer++;
        m -= a[i];
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
      Integer[] a = new Integer[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(a, Comparator.reverseOrder());

      int answer = 0;
      for (int i = 0; i < n; i++) {
        if (0 < m) {
          answer++;
          m -= a[i];
        }
      }

      System.out.println(answer);

    }

  }
  ```
    