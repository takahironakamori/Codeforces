### Codeforces Round #564 (Div.2)

# A. Nauuo and Votes

  [問題はこちら](https://codeforces.com/problemset/problem/1173/A)
  
- 概要<br>
  評価について、良いが x、悪いが y、不確定が z ある。<br>
  最終的に良い評価が多い場合は +、悪い評価が多い場合は - を、良いと悪いが同数の場合、0 を、不確定の場合は ? を出力せよ。<br>

  
- 発想<br>
  x と y の大小関係で決まるが、z の値が x と y の差の絶対値より大きい場合は ? となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x, y, z;
    cin >> x >> y >> z;

    if (x == y) {
      if (0 < z) {
        cout << "?" << endl;
      } else {
        cout << 0 << endl;
      }
    } else if (y < x) {  
      if (x - y <= z) {
        cout << "?" << endl;
      } else {
        cout << "+" << endl;
      }
    } else {
      if (y - x <= z) {
        cout << "?" << endl;
      } else {
        cout << "-" << endl;
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
      int x = sc.nextInt();
      int y = sc.nextInt();
      int z = sc.nextInt();

      sc.close();

      if (x == y) {
        if (0 < z) {
          System.out.println("?");
        } else {
          System.out.println(0);
        }
      } else if (y < x) {  
        if (x - y <= z) {
          System.out.println("?");
        } else {
          System.out.println("+");
        }
      } else {
        if (y - x <= z) {
          System.out.println("?");
        } else {
          System.out.println("-");
        }
      }

    }

  }
  ```
    