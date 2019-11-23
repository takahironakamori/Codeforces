### Codeforces Round #256 (Div. 2)

# A. Rewards

  [問題はこちら](https://codeforces.com/problemset/problem/448/A)
  
- 概要<br>
  過去 3 回の大会でカップとメダルを獲得した。<br>
  1 回目の大会で獲得したカップは a_1、メダルは b_1 個ある。<br>
  2 回目の大会で獲得したカップは a_2、メダルは b_2 個ある。<br>
  3 回目の大会で獲得したカップは a_3、メダルは b_3 個ある。<br>
  これらのカップとメダルを n 段の棚に置きたい。<br>
  しかし、以下の条件がある。<br>
  ・同じ大会のカップとメダルは同じ段に置かない。<br>
  ・1 つの棚におけるカップの数は、5 個。<br>
  ・1 つの棚におけるメダルの数は、10 個。
  すべてのカップとメダルを棚に置くことができる場合は YES を、<br>
  置けない場合は NO を出力せよ。
  
  
- 発想<br>
  カップおよびメダルの合計を計算する。<br>
  カップの数 / 5（切り上げ）とメダルの数 / 10（切り上げ）の合計が n 以下だとすべてのカップとメダルを置くことができる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;

    int a = ceil((double) (a1 + a2 + a3) / 5);
    int b = ceil((double) (b1 + b2 + b3) / 10);

    if ((a + b) <= n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      double a1 = sc.nextInt();
      double a2 = sc.nextInt();
      double a3 = sc.nextInt();
      double b1 = sc.nextInt();
      double b2 = sc.nextInt();
      double b3 = sc.nextInt();
      double n = sc.nextInt();
      sc.close();

      double a = Math.ceil((a1 + a2 + a3) / 5);
      double b = Math.ceil((b1 + b2 + b3) / 10);

      if ((a + b) <= n) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    