### Codeforces Round #489 (Div. 2)

# A. Nastya and an Array

  [問題はこちら](https://codeforces.com/problemset/problem/992/A)
  
- 概要<br>
  整数（負もありえる）で構成される n 文字の数列が与えられる。<br>
  i 番目の値は、a_i である。<br>
  これらの値をすべてを 0 にしたい。<br>
  1 秒間で 1 つの整数（負もありえる）を数列の 0 以外のすべての数値に加えることができる。<br>
  全てを 0 にするには最短で何秒かかるか。
  
  
- 発想<br>
  0 以外の数値の種類の数を set などで数える。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    set<int> st;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (a != 0) {
        st.insert(a);
      }
    }

    cout << st.size() << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();

      Set<Integer> st = new TreeSet<Integer>();

      for (int i = 0; i < n; i++) {
        int a = sc.nextInt();
        if (a != 0) {
          st.add(a);
        }
      }

      sc.close();

      System.out.println(st.size());

    }

  }
  ```
    