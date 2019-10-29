### Codeforces Round #247 (Div. 2)

# A. Black Square

  [問題はこちら](https://codeforces.com/problemset/problem/431/A)
  
- 概要<br>
  以下のようなゲームを行ったときの得点を計算せよ。<br>
  ・a1, a2, a3, a4 の 4 つの数値が与えられる。<br>
  ・i を選択すると a_i の得点が加算される。
  
  
- 発想<br>
  s を 1 文字ずつ分解し、1 の場合は a1、2 の場合は a2、3 の場合は a3、4 の場合は a4、の値を足していく。  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> a(4);
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    string s;
    cin >> s;

    int answer = 0;

    for (int i = 0; i < s.length(); i++) {
      answer += a[s[i] - '0' - 1];
    }

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int[] a = new int[4];
      a[0] = sc.nextInt();
      a[1] = sc.nextInt();
      a[2] = sc.nextInt();
      a[3] = sc.nextInt();

      String S = sc.next();

      sc.close();

      String[] s = S.split("");

      int answer = 0;

      for (int i = 0; i < s.length; i++) {
        answer += a[Integer.valueOf(s[i]) - 1];
      }

      System.out.println(answer);

    }

  }
  ```
    