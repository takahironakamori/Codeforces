### Codeforces Round #437 (Div. 2, based on MemSQL Start[c]UP 3.0 - Round 2)

# A. Between the Offices

  [問題はこちら](https://codeforces.com/problemset/problem/867/A)
  
- 概要<br>
  n 日分の記録が与えられる。<br>
  記録とは、S とあればシアトルに 1 日いたことを示し、F とあればサンフランシスコに 1 日いたことを示し、他の場所には行っていない。<br>
  したがって、SF とあればシアトルからサンフランシスコに移動したことになり、FSとあればサンフランシスコからシアトルに移動したことになる。<br>
  シアトルからサンフランシスコに移動した回数がサンフランシスコからシアトルに移動したより多い場合は YES をそれ以外の場合は NO を出力せよ。
  
- 発想<br>
  S か F しかいなかったので、最初の文字が S 、最後の文字が F だと必ずシアトルからサンフランシスコに移動した回数が多くなる。<br>
  それ以外の場合は、同じかサンフランシスコからシアトルに移動したより多くなる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string v;
    cin >> v;

    if (v[0] == 'S' && v[n-1] == 'F') {
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
      int n = sc.nextInt();
      String V = sc.next();
      sc.close();

      String[] v = V.split("");  

      if (v[0].equals("S") && v[n-1].equals("F")) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }

    }

  }
  ```
    