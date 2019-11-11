### Codeforces Round #513 by Barcelona Bootcamp (rated, Div. 1 + Div. 2)

# A. Phone Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/1060/A)
  
- 概要<br>
  8 で始まる 11 桁の数字は電話番号の可能性がある。<br>
  n 枚のカードが配られる。<br>
  カードには 1 つ数字が書かれている。<br>
  無制限に並び替えができるとして、電話番号は最大何個作ることができるか。
  
  
- 発想<br>
  n 枚のカードの 8 の数と n / 11 の小さい方が回答となる。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> num(10);

    for (int i = 0; i < n; i++) {
      int v = s[i] - '0';
      num[v]++; 
    }

    cout << min(n/11, num[8]) << endl;

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

      String[] s = S.split("");

      int[] num = new int[10];

      for (int i = 0; i < n; i++) {
        int v = Integer.valueOf(s[i]);
        num[v]++; 
      }

      System.out.println(Math.min(n / 11, num[8]));

    }

  }
  ```
    