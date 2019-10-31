### Codeforces Round #546 (Div. 2)

# A. Nastya Is Reading a Book

  [問題はこちら](https://codeforces.com/problemset/problem/1136/A)
  
- 概要<br>
  n 章ある本を読んでいる。<br>
  i 章は、l_i から　r_i まで。<br>
  k まで読んだとすると、すべての章を読み終えるには、残り何章読み終える必要があるか。<br>
  途中の章も読み終えていない章に含む。

  
- 発想<br>
  l_i <= k かつ k <= r_i の i　を探し、n から引く。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n;
    cin >> n;

    vector<int> l(n);
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
      cin >> l[i] >> r[i];
    }

    int k;
    cin >> k;

    int count = 0;
    for (int i = 0; i < n; i++) {
      if (l[i] <= k && k <= r[i]){
        count = i;
      }
    }

    cout << n - count << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      int[] l = new int[n];
      int[] r = new int[n];

      for (int i = 0; i < n; i++) {
        l[i] = sc.nextInt();
        r[i] = sc.nextInt();
      }

      int k = sc.nextInt();

      sc.close();

      int count = 0;
      for (int i = 0; i < n; i++) {
        if (l[i] <= k && k <= r[i]){
          count = i;
        }
      }

      System.out.println(n - count);

    }

  }
  ```
    