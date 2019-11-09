### Codeforces Round #377 (Div. 2)

# A. Buy a Shovel

  [問題はこちら](https://codeforces.com/problemset/problem/732/A)
  
- 概要<br>
  1 burle コインが r 枚、10 burle コインが無限にある。<br>
  これらのコインを使って k burle コインするシャベルを買いたい。<br>
  お釣りをもらうことなく買いたい場合、最低何本買うことができるか。
  
- 発想<br>
  i を 1 から順に増やしていく。<br>
  k * i を 10で割ったあまりが、r か 0 に等しい場合の i が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int k, r;
    cin >> k >> r;

    int answer = 0;
    for (int i = 1; i < 10; i++) {
      answer = i;
      if ((k * i) % 10 == r || (k * i) % 10 == 0) {
        break;
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
      int k = sc.nextInt();
      int r = sc.nextInt();
      sc.close();

      int answer = 0;
      for (int i = 1; i < 10; i++) {
        answer = i;
        if ((k * i) % 10 == r || (k * i) % 10 == 0) {
          break;
        }
      }

      System.out.println(answer);

    }

  }
  ```
    