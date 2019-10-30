### Codeforces Round #501 (Div. 3)

# A. Points in Segments

  [問題はこちら](https://codeforces.com/problemset/problem/1015/A)
  
- 概要<br>
  1 から m までのマスがあって、n 個の範囲が決められている。<br>
  i 個目の範囲は、l_i から r_i までとなっている。<br>
  範囲は重なっているものもある。<br>
  範囲に含まれていないマスは何個あって、それぞれ何番目のマスか。
  
- 発想<br>
  m 個の要素を持つ配列に、範囲に含まれている箇所に 1 を加えていくと、<br>
  値が 0 の要素が範囲に含まれていないマスとなる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> s(m);
    for (int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;
      for (int j = l; j <= r; j++) {
        s[j - 1]++;
      }
    }

    int count = 0;
    for (int i = 0; i < m; i++) {
      if (s[i] == 0 ) {
        count++;
      }
    }

    cout << count << endl;

    for (int i = 0; i < m; i++) {
      if (s[i] == 0 ) {
        cout << i + 1 << " ";
      }
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
      int m = sc.nextInt();
      int[] s = new int[m];
      for (int i = 0; i < n; i++) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        for (int j = l; j <= r; j++) {
          s[j - 1]++;
        }
      }
      sc.close();

      int count = 0;
      for (int i = 0; i < m; i++) {
        if (s[i] == 0 ) {
          count++;
        }
      }

      System.out.println(count);

      for (int i = 0; i < m; i++) {
        if (s[i] == 0 ) {
          System.out.print(i + 1);
          System.out.print(" ");
        }
      }

      System.out.println("");

    }

  }
  ```
    