### Codeforces Round #541 (Div. 2)

# A. Sea Battle

  [問題はこちら](https://codeforces.com/problemset/problem/1131/A)
  
- 概要<br>
  幅 w1, 高さ h1 と幅 w2, 高さ h2 の長方形 がマス目上に 2つある。<br>
  w1 ≧ w2 であり、1つめの長方形（w1, h1）の上に左揃えで 2 つめの長方形（w2, h2）がひっついている。<br>
  2 つの長方形を 1 つのものとして見た場合、１つ外側のマス目の合計を出力せよ。

  
- 発想<br>
  それぞれの長方形の１つ外側のマス目は、(幅 + 2) * 2 + 高さ * 2 となるので、<br>
  重ならない場合は、(w1 + 2) * 2 + h1 * 2 + (w2 + 2) * 2 + h2 * 2 がマス目の合計となる。<br> 
  2 つの長方形が重なることで、(w2 + 2) * 2 マス重なるので、その分を引く。<br>
  これらを整理すると、(w1 + 2 + h1 + h2) * 2 となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    cout << (w1 + 2 + h1 + h2) * 2 << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int w1 = sc.nextInt();
      int h1 = sc.nextInt();
      int w2 = sc.nextInt();
      int h2 = sc.nextInt();
      sc.close();

      System.out.println((w1 + 2 + h1 + h2) * 2);
    }

  }
  ```
    