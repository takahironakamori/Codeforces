### Codeforces Round #580 (Div. 2)

# B. Make Product Equal One

  [問題はこちら](https://codeforces.com/problemset/problem/1206/B)
  
- 概要<br>
  n 個の数列が与えられる。<br>
  i 番目は a_i である。<br>
  これらの数値に 1 加えるか 1 引く操作を行うことができる。<br>
  この操作を行い、各数列の積を 1 にしたい。<br>
  最低、何回操作する必要があるか。
  
  
- 発想<br>
  正の値については、1 に、負の値については、-1 にする。<br>
  負の値の合計が奇数の場合は、もう 1 つ -1 が必要。<br>
  0 がない場合は、1 から -1 を作る必要があるので、2 加える。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long n;
    cin >> n;

    vector<int> a(n);
    long long minus = 0;
    long long zero = 0;
    long long answer = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0) {
        zero++;
      } else if (a[i] < 0) {
        minus++;
        if (a[i] != -1) {
          answer += abs(a[i] + 1);
        }
      } else {
        if (a[i] != 1) {
          answer += abs(a[i] - 1);
        }
      }
    }

    if (minus % 2 == 1) {
      if (zero == 0) {
        answer += 2;
      }
    }

    answer += zero;

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
      int[] a = new int[n];
      long minus = 0;
      long zero = 0;
      long answer = 0;

      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
        if (a[i] == 0) {
          zero++;
        } else if (a[i] < 0) {
          minus++;
          if (a[i] != -1) {
            answer += Math.abs(a[i] + 1);
          }
        } else {
          if (a[i] != 1) {
            answer += Math.abs(a[i] - 1);
          }
        }
      }

      if (minus % 2 == 1) {
        if (zero == 0) {
          answer += 2;
        }
      }

      answer += zero;

      sc.close();

      System.out.println(answer);

    }

  }
  ```
    