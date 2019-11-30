### Codeforces Round #450 (Div. 2)

# A. Find Extra One

  [問題はこちら](https://codeforces.com/problemset/problem/897/A)
  
- 概要<br>
  座標上に N 個点ある。<br>
  i 番目の点は x_i, y_i にある。<br>
  これらの点のうち、1 つの点を削除して、残りの点を y 軸の左側か右側のどちらかにだけ点があるように出来るかを判定せよ。
  
- 発想<br>
  y 軸の左側と右側にある点の数を数える。<br>
  全て片方の側に点があるか、片側に 1 点だけある場合は、どちらかにだけ点が存在するように出来る。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      if (0 < x) {
        count1++;
      } else {
        count2++;
      }
    }

    if ((n - 1) <= count1 || (n - 1) <= count2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
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

      int count1 = 0;
      int count2 = 0;
      for (int i = 0; i < n; i++) {
        int x = sc.nextInt();
        int y = sc.nextInt();
        if (0 < x) {
          count1++;
        } else {
          count2++;
        }
      }

      sc.close();

      if ((n - 1) <= count1 || (n - 1) <= count2) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    