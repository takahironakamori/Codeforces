### ICM Technex 2017 and Codeforces Round #400 (Div. 1 + Div. 2, combined)

# A. A Serial Killer

  [問題はこちら](https://codeforces.com/problemset/problem/776/A)
  
- 概要<br>
  2 人の名前が与えられる。<br>
  そして、n 日間に渡って、2 人の名前が与えられる。<br>
  最初の名前は殺された人で、次の人は新たに発見した人である。<br>
  1 〜 n 日間に残っている 2 人の名前を出力せよ。
  
  
- 発想<br>
  前日の 2 人の名前を比較して、同じ名前を新たに発見した人の名前にする。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    string f, s;
    cin >> f >> s;

    int n;
    cin >> n;

    cout << f << " " << s << endl;

    for (int i = 0; i < n; i++) {
      string f1, f2;
      cin >> f1 >> f2;
      if (f == f1) {
        f = f2;
      } else {
        s = f2;
      }
      cout << f << " " << s << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      String f = sc.next();
      String s = sc.next();
      int n = sc.nextInt();

      System.out.println(f + " " + s);

      for (int i = 0; i < n; i++) {
        String f1 = sc.next();
        String f2 = sc.next();
        if (f.equals(f1)) {
          f = f2;
        } else {
          s = f2;
        }
        System.out.println(f + " " + s);
      }

      sc.close();

    }

  }
  ```
    