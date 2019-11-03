### Codeforces Round #156 (Div. 2)

# A. Greg's Workout

  [問題はこちら](https://codeforces.com/problemset/problem/255/A)
  
- 概要<br>
  n 個の数字が与えられる。<br>
  それらの数字は、順番に chest をする回数、biceps をする回数、back をする回数、chest をする回数、biceps をする回数...と続く。<br>
  chest、biceps、backのうち、最も回数が多いものを出力せよ。<br>
  
  
- 発想<br>
  要素数 3 の配列を用意して、n 個の数値を [0]、[1]、[2]、[0]、[1]...に加える。<br>
  そして、最も大きい数値のものを出力する。
  
  
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

    // [0]chest [1]biceps [2]back
    vector<int> e(3);

    for (int i = 0; i < n; i++) {
      e[i % 3] += a[i];
    }

    if (e[0] < e[1]) {
      if (e[1] < e[2]) {
        cout << "back" << endl;
      } else {
        cout << "biceps" << endl;
      }
    } else {
      if (e[0] < e[2]) {
        cout << "back" << endl;
      } else {
        cout << "chest" << endl;
      }
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

      // [0]chest [1]biceps [2]back
      int[] e = new int[3];

      for (int i = 0; i < n; i++) {
        e[i % 3] += a[i];
      }

      if (e[0] < e[1]) {
        if (e[1] < e[2]) {
          System.out.println("back");
        } else {
          System.out.println("biceps");
        }
      } else {
        if (e[0] < e[2]) {
          System.out.println("back");
        } else {
          System.out.println("chest");
        }
      }

    }

  }
  ```
    