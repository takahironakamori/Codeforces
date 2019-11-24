### Codeforces Round #301 (Div. 2)

# A. Combination Lock

  [問題はこちら](https://codeforces.com/problemset/problem/540/A)
  
- 概要<br>
  n 文字のコンビネーションロックがある。<br>
  2 つ文字列が与えられ、最初の文字列が現状の状態で、2 番目の文字列は解錠される文字列である。<br>
  解錠するには最短で何回数字を変更する必要があるか。<br>
  
  
- 発想<br>
  i 番目の桁について、10 から 最初の文字列の値と解錠される文字列の値の絶対値を引いたものと、<br>
  最初の文字列の値と解錠される文字列の値の絶対値を引いたもので、小さい方が最短の操作回数となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;

    int answer = 0;
    for (int i = 0; i < n; i++) {
      answer += min(10 - abs(s1[i] - s2[i]), abs(s1[i] - s2[i]));
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
      int n = sc.nextInt();
      String S1 = sc.next();
      String S2 = sc.next();
      sc.close();

      char[] s1 = S1.toCharArray();
      char[] s2 = S2.toCharArray();

      int answer = 0;
      for (int i = 0; i < n; i++) {
        answer += Math.min(10 - Math.abs(s1[i] - s2[i]), Math.abs(s1[i] - s2[i]));
      }

      System.out.println(answer);

    }

  }
  ```
    