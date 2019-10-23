### Codeforces Round #590 (Div. 3)

# A. Equalize Prices Again

  [問題はこちら](https://codeforces.com/contest/1234/problem/A)
  
- 概要<br>
  n 個の商品があり、i 番目の商品の価格は a_i である。<br>
  n 個の商品の価格をすべて同じ金額にしたい。<br>
  最初の金額の合計より少なくとも同じ合計金額にしたい。<br>
  商品 1 つの最低金額はいくらか。
  
- 発想<br>
  n 個の商品の平均価格（切り上げ）を計算する。
  

- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    vector<int> sum(q);
    for (int i = 0; i < q; i++) {
      int n;
      cin >> n;
      for (int j = 0; j < n; j++) {
        int a;
        cin >> a;
        sum[i] += a;
      }
      cout << (int) ceil((double) sum[i] / n) << endl;
    }

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int q = sc.nextInt();

      int[] sum = new int[q];
      for (int i = 0; i < q; i++) {
        int n = sc.nextInt();
        for (int j = 0; j < n; j++) {
          sum[i] += sc.nextInt();
        }
        System.out.println((int) Math.ceil((double) sum[i] / n));
      }

      sc.close();
    }

  }
  ```
    