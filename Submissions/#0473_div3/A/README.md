### Codeforces Round #473 (Div. 2)

# A. Mahmoud and Ehab and the even-odd game

  [問題はこちら](https://codeforces.com/problemset/problem/959/A)
  
- 概要<br>
  Mahmoud と Ehab でゲームをする。<br>
  ・整数 n が与えられる。<br>
  ・Mahmoud は偶数を選ぶことができる。<br>
  ・Ehab は奇数を選ぶことができる。<br>
  ・Mahmoud と Ehab は交互に指定し、n から引く。数字が引くことができなくなったら、負けである。<br>
  このゲームに勝つ方はどちらか。
  
  
- 発想<br>
  n が偶数の場合、Mahmoud は a = n を選択して勝つ。<br>
  それ以外の場合、Mahmoud は a < n を選択する必要がある。<br>
  n は奇数、a は偶数なので、n - aは奇数になるので、Ehab はそれをすべて引き算して勝つ。<br>
  したがって、n が偶数であれば Mahmoud は必ず勝ち、n が奇数であれば、Ehab が必ず勝つ。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    if (n % 2 == 0) {
      cout << "Mahmoud" << endl;
    } else {
      cout << "Ehab" << endl;
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

      if (n % 2 == 0) {
        System.out.println("Mahmoud");
      } else {
        System.out.println("Ehab");
      }

    }

  }
  ```
    