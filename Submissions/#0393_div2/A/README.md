### Codeforces Round #393 (Div. 2) (8VC Venture Cup 2017 - Final Round Div. 2 Edition)

# A. Petr and a calendar

  [問題はこちら](https://codeforces.com/problemset/problem/760/A)
  
- 概要<br>
  カレンダーを作りたい。<br>
  行を曜日にし、1行目を月曜日、2行目が火曜日...7行目が日曜日である。<br>
  月と1日の曜日が与えられるので、何列必要か出力せよ。<br>
  なお、うるう年ではない年を想定している。
  
  
- 発想<br>
  月の日数 + d - 1 を 7 で割る（切り上げ）。 
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    int m, d;
    cin >> m >> d;

    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    double days_ = days[m - 1] + d - 1;

    cout << ((int) ceil(days_ / 7)) << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int m = sc.nextInt();
      int d = sc.nextInt();
      sc.close();

      int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

      double days_ = days[m - 1] + d - 1;

      System.out.println((int) Math.ceil(days_ / 7));

    }

  }
  ```
    