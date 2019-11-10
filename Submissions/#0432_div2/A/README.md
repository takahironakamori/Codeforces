### Codeforces Round #432 (Div. 2, based on IndiaHacks Final Round 2017)

# A. Arpa and a research in Mexican wave

  [問題はこちら](https://codeforces.com/problemset/problem/851/A)
  
- 概要<br>
  n 行のスタンドがあるスタジアムでウェーブができないかを検討している。<br>
  ウェーブは 1 行目からスタートして、 n 行目で終わる。<br>
  ウェーブ開始後、1 秒目は、1 行目の人が立つ。<br>
  2 秒目は、2 行目の人が立つ。<br>
  ...<br>
  k 秒目は、k 行目の人が立つ。<br>
  k+1 秒目は、k+1 行目の人が立って、1 行目の人は座る。<br>
  k+2 秒目は、k+2 行目の人が立って、2 行目の人は座る。<br>
  ...<br>
  n 秒目は、n 行目の人が立って、n - k 行目の人は座る。<br>
  n+1 秒目は、n+1 行目の人が立って、n + 1 - k 行目の人は座る。<br>
  ...<br>
  n+k 秒目は、n 行目の人は座る。<br>
  <br>
  t 秒目のときに人が立っている行は何行あるか。
  
  
- 発想<br>
  t <= k のときは、人が立っている行は t となる。<br>
  k < t <= n のときは、人が立っている行は k となる。<br>
  それ以外のときは、人が立っている行は k - (t - n) となる。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, k, t;
    cin >> n >> k >> t;

    if (t <= k) {
      cout << t << endl;
    } else if (t <= n) {
      cout << k << endl;
    } else {
      cout << k - (t - n) << endl;
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
      int k = sc.nextInt();
      int t = sc.nextInt();
      sc.close();

      if (t <= k) {
        System.out.println(t);
      } else if (t <= n) {
        System.out.println(k);
      } else {
        System.out.println(k - (t - n));
      }

    }

  }
  ```
    