### Codeforces Round #351 (VK Cup 2016 Round 3, Div. 2 Edition)

# A. Bear and Game

  [問題はこちら](https://codeforces.com/problemset/problem/673/A)
  
- 概要<br>
  Bear は 15 分以上つまらない時間が続くとテレビを切る。<br>
  90 分間のテレビ番組について、n 箇所の面白い箇所があった。<br>
  i 番目に面白い箇所は、t_i 分の時点である。<br>
  Bear は最大何分間テレビ番組をつけていたか。
  
- 発想<br>
  t_i + 15 より t_{i+1} の方が大きかったら、t_i + 15 分までとなる。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> t(n+2);
    for (int i = 1; i <= n; i++) {
      cin >> t[i];
    }

    t[n + 1] = 91;

    for (int i = 1; i <= n + 1; i++) {
      if (t[i - 1] + 15 < t[i]) {
        cout << t[i - 1] + 15 << endl;
        return 0;
      }
    }

    cout << 90 << endl;
    return 0;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] t = new int[n + 2];
      for (int i = 1; i <= n; i++) {
        t[i] = sc.nextInt();
      }
      sc.close();

      t[n + 1] = 91;

      for (int i = 1; i <= n + 1; i++) {
        if (t[i - 1] + 15 < t[i]) {
          System.out.println(t[i - 1] + 15);
          return;
        }
      }

      System.out.println(90);

    }

  }
  ```
    