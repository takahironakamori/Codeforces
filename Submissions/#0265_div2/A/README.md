### Codeforces Round #265 (Div. 2)

# A. inc ARG

  [問題はこちら](https://codeforces.com/problemset/problem/465/A)
  
- 概要<br>
  n 桁の 0 と 1 で構成する 2 進数を逆にした文字列が与えられる。<br>
  すなわち、1 番目の文字が最下位であり、n 番目が最上位となる。<br>
  最下位に 1 加えた場合、変化する文字は何文字あるか。
  
  
- 発想<br>
  2 進数で 1 加えたとき、1 が 0 になり、0 が 1 になる。<br>
  1 に 1 を加えると次の桁に繰り上がるので、0 がある桁まで変化することになる。<br>
  したがって、0 があったらその桁までで、すべて 1 の場合は、n 桁全てとなる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int answer = s.size() - 1;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        answer = i;
        break;
      }
    }

    cout << answer + 1 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      String S = sc.next();
      sc.close();

      char[] s = S.toCharArray();

      int answer = s.length - 1;

      for (int i = 0; i < s.length; i++) {
        if (s[i] == '0') {
          answer = i;
          break;
        }
      }

      System.out.println(answer + 1);

    }

  }
  ```
    