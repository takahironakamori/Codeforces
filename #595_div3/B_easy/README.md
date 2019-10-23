### Codeforces Round #595 (Div. 3)

# B1. Books Exchange (easy version)

  [問題はこちら](https://codeforces.com/contest/1249/problem/B1)
  
- 概要<br>
  n 人の子供がいて、それぞれ 1 日に 1 冊本を読む。<br>
  i 番目の子供は、本を読んだら、次の日に p_i　番目の子供に本を渡す。<br>
  i = p_i の場合は、渡さないことを示す。<br>
  n 人の子供について、最初に読んだ本が自分に戻ってくるのはそれぞれ何日後か。
  
- 発想<br>
  n の上限が 200 と少ないのでループでシミュレーションすればいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

      int n;
      cin >> n;

      vector<int> p(n);
      for (int j = 0; j < n; j++) {
        cin >> p[j];
        p[j]--;
      }

      for (int j = 0; j < n; j++) {
        int count = 1;
        int k = p[j];
        while (k != j) {
          count++;
          k = p[k];
        }
        cout << count << " ";
      }

      cout  << endl;

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

      for (int i = 0; i < q; i++) {

        int n = sc.nextInt();
        int[] p = new int[n];
        for (int j = 0; j < n; j++) {
          p[j] = sc.nextInt();
          p[j]--;
        }

        for (int j = 0; j < n; j++) {
          int count = 1;
          int k = p[j];
          while (k != j) {
            count++;
            k = p[k];
          }
          System.out.print(count + " ");
        }

        System.out.println("");

      }

      sc.close();

    }

  }
  ```
    