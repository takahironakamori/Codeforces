### Codeforces Round #571 (Div. 2)

# A. Vus the Cossack and a Contest

  [問題はこちら](https://codeforces.com/problemset/problem/1186/A)
  
- 概要<br>
  生徒が n 人いて、ペンが m 本、ノートが k 冊ある。<br>
  生徒全員にペンを 1 本、ノートを 1 冊ずつ配ることができるか。

  
- 発想<br>
  m が n 以上 かつ k が n 以上であれば Yes 、満たさない場合は No を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    if (n <= m && n <= k) {
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
      int m = sc.nextInt();
      int k = sc.nextInt();
      sc.close();

      if (n <= m && n <= k) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }

    }

  }
  ```
    