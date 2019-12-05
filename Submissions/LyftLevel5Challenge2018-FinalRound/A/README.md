### Lyft Level 5 Challenge 2018 - Final Round (Open Div. 2)

# A. The King's Race

  [問題はこちら](https://codeforces.com/problemset/problem/1075/A)
  
- 概要<br>
  n × n のマスがあるゲーム盤でゲームをする。<br>
  (1,1) には白駒、(n,n)には黒駒がある。<br>
  それぞれ、上下左右にマスがあれば、そこに 1 回につき 1 マス移動することができる。<br>
  先手は白駒である。<br>
  x, y の位置に早く辿りける駒はどちらか。
  
  
- 発想<br>
  最短距離で移動する方法が勝つための移動方法である。<br>
  最短距離は、白駒の場合は、x + y - 2 であり、<br>
  黒駒の場合は、n × 2 - x - y である。<br>
  これらの結果が小さい方が勝ち、同じ場合は先手の白駒の勝ち。
   
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    long long n;
    cin >> n;

    string answer = "White";

    long long x, y;
    cin >> x >> y;

    long long w = x + y - 2;
    long long b = n * 2 - x - y;

    if (b < w) {
      answer = "Black";
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
      long n = sc.nextLong();
      long x = sc.nextLong();
      long y = sc.nextLong();
      sc.close();

      String answer = "White";

      long w = x + y - 2;
      long b = n * 2 - x - y;

      if (b < w) {
        answer = "Black";
      }

      System.out.println(answer);

    }

  }
  ```
    