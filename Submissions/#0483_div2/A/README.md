### Codeforces Round #483 (Div. 2) 

# A. Game

  [問題はこちら](https://codeforces.com/problemset/problem/984/A)
  
- 概要<br>
  2 人でゲームをする。<br>
  n 文字の数値が並んでいる。<br>
  先手は、最も小さい数を最後まで残したい。<br>
  後手は、最も大きい数を最後まで残したい。<br>
  最後に残った数値は何か。
  
  
- 発想<br>
  a を小さい順に並び替える。<br>
  a の長さが奇数の場合は、a[n/2]番目が残り、<br>
  a の長さが偶数の場合は、a[n/2-1]番目が残る。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (n % 2 == 0) {
      cout << a[n/2-1] << endl;
    } else {
      cout << a[n/2] << endl;
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
      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(a);

      if (n % 2 == 0) {
        System.out.println(a[n/2-1]);
      } else {
        System.out.println(a[n/2]);
      }

    }

  }
  ```
    