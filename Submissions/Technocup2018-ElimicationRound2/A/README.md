### Technocup 2018 - Elimination Round 2

# A. Search for Pretty Integers

  [問題はこちら](https://codeforces.com/problemset/problem/870/A)
  
- 概要<br>
  n 個の整数が含まれているの数列と m 個の整数が含まれている数列がある。<br>
  n 個の i 番目の数値は、a_i、m 個の i 番目の数値は、b_i である。<br>
  少なくともどちらかの数列にある数値を使って、最小の正の整数値を出力せよ。
  
  
- 発想<br>
  a と b に同じ数値がある場合は、その数のうち最小の 1 桁の数が回答となる。<br>
  a と b に同じ数値がない場合は、<br>
  ・a の最小値 * 10 + b の最小値<br>
  ・b の最小値 * 10 + a の最小値<br>
  のいずれか小さい方となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m;
    cin >> n >> m;

    vector<int> num(10);

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      num[a[i]]++;
    }
    sort(a.begin(),a.end());

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
      num[b[i]]++;
    }
    sort(b.begin(),b.end());

    for (int i = 1; i < 10; i++) {
      if (num[i] == 2) {
        cout << i << endl;
        return 0;
      }
    }

    if (a[0] < b[0]) {
      cout << a[0] * 10 + b[0] << endl;
    } else {
      cout << b[0] * 10 + a[0] << endl;
    }

    return 0;

  }
  ```
  
  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, m, k;
    cin >> n >> m >> k;

    int p = (k - 1) / 2;

    if (k % 2 == 0) {
      cout << p / m + 1 << " " << p % m + 1 << " R" << endl;
    } else {
      cout << p / m + 1 << " " << p % m + 1 << " L" << endl;
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
      int m = sc.nextInt();

      int[] num = new int[10];

      int[] a = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
        num[a[i]]++;
      }
      Arrays.sort(a);

      int[] b = new int[m];
      for (int i = 0; i < m; i++) {
        b[i] = sc.nextInt();
        num[b[i]]++;
      }
      Arrays.sort(b);

      sc.close();

      for (int i = 1; i < 10; i++) {
        if (num[i] == 2) {
          System.out.println(i);
          return;
        }
      }

      if (a[0] < b[0]) {
        System.out.println(a[0] * 10 + b[0]);
      } else {
        System.out.println(b[0] * 10 + a[0]);
      }

    }

  }
  ```
    