### Codeforces Round #340 (Div. 2)

# A. Elephant

  [問題はこちら](https://codeforces.com/problemset/problem/617/A)
  
- 概要<br>
  0 から x まで移動したい。<br>
  1 回のステップで、1、2、3、4、5 のどれかを選んで進むことができる。<br>
  最短で何回ステップ必要か。
  
- 発想<br>
  x を 5 で割れるだけ割る。<br>
  5 で割り切れない場合は、余りは、4、3、2、1 のどれかなので 1 回加える。<br>
  すなわち、x を 5 で割った数を小数点第 1 位で切り上げる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int x;
    cin >> x;

    double answer = (double) x / 5;

    cout << ceil(answer) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      double x = sc.nextDouble();
      sc.close();

      System.out.println((int) Math.ceil(x / 5));

    }

  }
  ```
    