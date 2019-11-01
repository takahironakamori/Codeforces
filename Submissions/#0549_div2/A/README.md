### Codeforces Round #549 (Div. 2)

# A. The Doors

  [問題はこちら](https://codeforces.com/problemset/problem/1143/A)
  
- 概要<br>
  n 個のドアがあり、それぞれ左側にある場合は 0 、右にある場合は 1 で与えられる。<br>
  左側のドアか右側のドアのどちらすべてを開けることで外に出ることができる。<br>
  n_0 から順番にドアを開けた場合、外に出ることができるのは、何番目のドアを開けた時か。

  
- 発想<br>
  左側にあるドアと右側にあるドアを数えておき、順番に減らしていき、どちらかが 0 になった時が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    int l = 0;
    int r = 0;

    vector<int> d(n);

    for (int i = 0; i < n; i++) {
      cin >> d[i];
      if (d[i] == 0) {
        l++;
      } else {
        r++;
      }
    }

    for (int i = 0; i < n; i++) {
      if (d[i] == 0) {
        l--;
        if (l == 0) {
          cout << i + 1 << endl;
          break;
        }
      } else {
        r--;
        if (r == 0) {
          cout << i + 1 << endl;
          break;
        }
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

      int l = 0;
      int r = 0;

      int[] d = new int[n];

      for (int i = 0; i < n; i++) {
        d[i] = sc.nextInt();
        if (d[i] == 0) {
          l++;
        } else {
          r++;
        }
      }

      sc.close();

      for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
          l--;
          if (l == 0) {
            System.out.println(i + 1);
            break;
          }
        } else {
          r--;
          if (r == 0) {
            System.out.println(i + 1);
            break;
          }
        }
      }

    }

  }
  ```
    