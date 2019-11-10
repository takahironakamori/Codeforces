### Codeforces Round #490 (Div. 3) 

# A. Mishka and Contest

  [問題はこちら](https://codeforces.com/problemset/problem/999/A)
  
- 概要<br>
  k のスキルを持つ Mishka は、n 問の問題に挑戦した。<br>
  i 問目の問題を解くには、最低 a_i のスキルが必要である。<br>
  Mishka は問題を最初からと最後からどちらからでも行うことはできるが、どちらにしても必ず順番に挑戦している。<br>
  しかし、最初からと最後からの両方でスキルを超える問題に当たると挑戦をやめる。<br>
  何問解くことができか。
  
- 発想<br>
  a_i と k の比較を順番におこなっていくが、途中で解くことができない問題があった場合は、<br>
  最後から a_i と k の比較を行う。<br>
  途中で解くことができない問題がでなかったら、最後から比較を行う必要はない。
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int answer = 0;
    bool stop = false;

    for (int i = 0; i < n; i++) {
      if (a[i] <= k) {
        answer++;
      } else {
        stop = true;
        break;
      }
    }

    if (stop) {
      for (int i = n - 1; 0 <= i; i--) {
        if (a[i] <= k) {
          answer++;
        } else {
          break;
        }
      }
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
      int k = sc.nextInt();

      int[] a = new int[n];

      for (int i = 0; i < n; i++) {
        a[i] = sc.nextInt();
      }
      sc.close();

      int answer = 0;
      boolean stop = false;

      for (int i = 0; i < n; i++) {
        if (a[i] <= k) {
          answer++;
        } else {
          stop = true;
          break;
        }
      }

      if (stop) {
        for (int i = n - 1; 0 <= i; i--) {
          if (a[i] <= k) {
            answer++;
          } else {
            break;
          }
        }
      }

      System.out.println(answer);

    }

  }
  ```
    