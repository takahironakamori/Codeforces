### Codeforces Round #530 (Div. 2)

# A. Snowball

  [問題はこちら](https://codeforces.com/problemset/problem/1099/A)
  
- 概要<br>
  重さ w の雪玉が高さ h の位置にある。<br>
  これを高さ 0 まで転がす。<br>
  1 転がると、現在の高さ分重さが増える。<br>
  途中に岩が異なる高さの位置に 2 箇所ある。<br>
  1 つ目の岩は、重さが u_1 で高さ d_1 の位置にある。<br>
  2 つ目の岩は、重さが u_2 で高さ d_2 の位置にある。<br>
  岩に当たると、岩の重さ分、雪玉の重さが下がる。<br>
  岩に当たり重さが、負になった場合は、重さが 0 になり、転がり続ける。<br>
  高さ 0 に来たときの重さはどれだけか。

  
- 発想<br>
  h 回ループする。<br>
  ループの都度、 w に h - 移動した距離を加える。<br>
  高さが d_1 か d_2 と同じなら 岩の重さだけ w を減らし、<br>
  0 未満になったら w を 0 にする。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int w, h, u1, d1, u2, d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;

    for (int i = h; 0 < i; i--) { 
      w += i;
      if (i == d1) {
        w -= u1;
      }
      if (i == d2) {
        w -= u2;
      }
      if (w < 0) {
        w = 0;
      }
    }

    cout << w << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int w = sc.nextInt();
      int h = sc.nextInt();
      int u1 = sc.nextInt();
      int d1 = sc.nextInt();
      int u2 = sc.nextInt();
      int d2 = sc.nextInt();
      sc.close();

      for (int i = h; 0 < i; i--) { 
        w += i;
        if (i == d1) {
          w -= u1;
        }
        if (i == d2) {
          w -= u2;
        }
        if (w < 0) {
          w = 0;
        }
      }

      System.out.println(w);

    }

  }
  ```
    