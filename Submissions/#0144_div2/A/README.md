### Codeforces Round #144 (Div. 2)

# A. Perfect Permutation

  [問題はこちら](https://codeforces.com/problemset/problem/233/A)
  
- 概要<br>
  n が与えられるので、良い数列が作れる場合はその数列を出力しなさい。<br>
  作れない場合は、-1 を出力しなさい。<br>
  なお、良い数列とは、p_p_i = i かつ p_i ≠ i を満たす順列である。
  
- 発想<br>
  n が奇数の場合は良い数列は作れない。<br>
  n が偶数の場合は、2 個ずつ入れ替える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n % 2 == 0){
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
          cout << i + 1 << " ";
        } else {
          cout << i - 1 << " ";
        }
      }
      cout << endl;
    } else {
      cout << "-1" << endl;
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
      sc.close();

      if (n % 2 == 0){
        for (int i = 1; i <= n; i++) {
          if (i % 2 == 1) {
            System.out.print((i + 1) + " ");
          } else {
            System.out.print((i - 1) + " ");
          }
        }
        System.out.println("");
      } else {
        System.out.println("-1");
      }

    }

  }
  ```
    