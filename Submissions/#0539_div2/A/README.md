### Codeforces Round #539 (Div. 2)

# A. Sasha and His Trip

  [問題はこちら](https://codeforces.com/problemset/problem/1114/A)
  
- 概要<br>
  1 から n 番までの街が直線上に並んでいる。<br>
  それぞれの街は 1 km の道でつながっている。<br>
  現在 1 番の街にいて、車で n 番の街まで行きたい。<br>
  車のガソリンタンクの容量は v リットルで、1 リットルあたり 1 km移動することができる。<br>
  ガソリンタンクにはガソリンが 0 の状態から開始する。<br>
  1 から n 番までのすべての街にガソリンスタンドがある。<br>
  i 番目の街の 1 リットルあたりの価格は i である。<br>
  最も安く n まで移動した場合のガソリンを買った合計価格を出力せよ。

  
- 発想<br>
  n - 1 が v 以下の場合は、n - 1 が回答となる。<br>
  そうでない場合は、n - v 番目の街までガソリンは常に満タンにしておく方法が最も合計価格が安くなる。<br>
  すなわち、1 番目で v まで満タンにしておき、2 番目の街では 1 リットル減ったので 2 払って、補充する。<br>
  これを n - v まで繰り返して、その後は残ったガソリンで n まで移動する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int n, v;
    cin >> n >> v;

    int answer = v;

    if (n - 1 <= v) {
      answer = n - 1;
    }

    for (int i = 2; i <= n - v; i++){
      answer += i;
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
      int v = sc.nextInt();
      sc.close();

      int answer = v;

      if (n - 1 <= v) {
        answer = n - 1;
      }

      for (int i = 2; i <= n - v; i++){
        answer += i;
      }

      System.out.println(answer);

    }

  }
  ```
    