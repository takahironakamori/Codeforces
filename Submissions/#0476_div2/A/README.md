### Codeforces Round #476 (Div. 2) \[Thanks, Telegram!]

# A. Paper Airplanes

  [問題はこちら](https://codeforces.com/problemset/problem/965/A)
  
- 概要<br>
  n を降順の数列に分ける。<br>
  例えば、8は\[4,4]、\[3,3,2]、\[2,2,1,1,1,1]、\[5,2,1]などがある。<br>
  最初の数値の個数を分裂数と考える。<br>
  例えば、\[1,1,1,1,1]は 5 であり、\[5,5,3,3,3]は 2 であり、\[9] は 1である。<br>
  n を分けた場合に分裂数は何種類あるか。
  
  
- 発想<br>
  n / 2 + 1 が回答。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int k, n, s, p;
    cin >> k >> n >> s >> p;

    int total = k * ceil((double) n / s);

    int answer = ceil((double) total / p);

    cout << answer << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int k = sc.nextInt();
      int n = sc.nextInt();
      int s = sc.nextInt();
      int p = sc.nextInt();
      sc.close();

      int total = k * (int) Math.ceil((double) n / s);

      int answer = (int) Math.ceil((double) total / p);

      System.out.println(answer);

    }

  }
  ```
    