### Codeforces Round #523 (Div. 2)

# A. Coins

  [問題はこちら](https://codeforces.com/problemset/problem/1061/A)
  
- 概要<br>
  1 から n までの価値があるコインがある。<br>
  枚数は無制限とする。<br>
  これらのコインの合計を S にする組み合わせで、最小のコインの枚数は何枚か。

  
- 発想<br>
  S / n を切り上げで計算した結果が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long n, S;
    cin >> n >> S;

    cout <<(long long) ceil((double) S / n) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      long n = sc.nextLong();
      long S = sc.nextLong();
      sc.close();

      long answer = (long) Math.ceil((double) S / n);

      System.out.println(answer);

    }

  }
  ```
    