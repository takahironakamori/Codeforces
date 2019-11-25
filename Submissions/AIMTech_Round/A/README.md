### AIM Tech Round (Div. 2)

# A. Save Luke
  
  [問題はこちら](https://codeforces.com/problemset/problem/624/A)
  
- 概要<br>
  Lukeはゴミシュレッダーに落とされ、両端からプレス機が迫ってきている。<br>
  プレス機は、0 の位置と L の位置から動く。<br>
  スピードはそれぞれ v_1 と v_2である。<br>
  Lukeの幅は d とすると、Lukeがプレス機につぶされるまでの最大時間を出力せよ。
  
- 発想<br>
  L から d を引いたものに、v_1 と v_2 を足したもので割ればいい。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    double d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;

    cout << setprecision(16) << (L - d) / (v1 + v2) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      double d = sc.nextDouble();
      double L = sc.nextDouble();
      double v1 = sc.nextDouble();
      double v2 = sc.nextDouble();
      sc.close();

      System.out.println((L - d) / (v1 + v2));

    }

  }
  ```
    