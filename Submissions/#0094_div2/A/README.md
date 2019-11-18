### Codeforces Beta Round #94 (Div. 2 Only)

# A. Cookies

  [問題はこちら](https://codeforces.com/problemset/problem/129/A)
  
- 概要<br>
  n 個の袋がある。<br>
  i 番目の袋には、クッキーが a_i 個入っている。<br>
  袋を 1 個を取り除いて、残りのクッキーの総数を偶数にする方法は何通りあるか出力せよ。
  
  
- 発想<br>
  n 個の袋のうち、クッキーが偶数個入っている袋と奇数個入っている袋の数を数える。<br>
  奇数個入っている袋が偶数ある場合は、偶数個入っている袋を 1 つ取るため、偶数個入っている袋の数を出力する。<br>
  奇数個入っている袋が奇数ある場合は、奇数個入っている袋を 1 つ取るため、奇数個入っている袋の数を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;
    
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }

    if (odd % 2 == 0) {
      cout << even << endl;
    } else {
      cout << odd << endl;
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

      int even = 0;
      int odd = 0;

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (a % 2 == 0) {
          even++;
        } else {
          odd++;
        }
      }

      sc.close();

      if (odd % 2 == 0) {
        System.out.println(even);
      } else {
        System.out.println(odd);
      }

    }

  }
  ```
    