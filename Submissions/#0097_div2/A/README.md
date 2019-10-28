### Codeforces Beta Round #97 (Div. 2)

# A. Presents

  [問題はこちら](https://codeforces.com/problemset/problem/136/A)
  
- 概要<br>
  n 人の友達がいて、それぞれ P_i へプレゼントを渡した。<br>
  自分は誰からプレゼントをもらったのかを出力せよ。
  
- 発想<br>
  n 個の配列を作り P_i 番目の配列に i を入れて、すべて入れてから順番に配列を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      int p;
      cin >> p;
      v[p - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
      cout << v[i] << " ";
    }

    cout << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int[] v = new int[n];
      for (int i = 0; i < n; i++) {
        int p = sc.nextInt();
        v[p - 1] = i + 1;
      }
      sc.close();

      for (int i = 0; i < n; i++) {
        System.out.print(v[i] + " ");
      }

      System.out.println("");
    }

  }
  ```
    