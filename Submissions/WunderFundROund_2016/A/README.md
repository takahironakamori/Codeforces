### Wunder Fund Round 2016 (Div. 1 + Div. 2 combined)

# A. Slime Combining

  [問題はこちら](https://codeforces.com/contest/618/problem/A)
  
- 概要<br>
  n 個のスライムを持っている。<br>
  最初に 1 個のスライムを置く。<br>
  2 個目以降スライムを置くと以下のような動きになる。<br>
  2 個目を置く：2<br>
  3 個目を置く：2 1<br>
  4 個目を置く：3<br>
  5 個目を置く：3 1<br>
  6 個目を置く：3 2<br>
  7 個目を置く：3 2 1<br>
  8 個目を置く：4<br>
  n 個を置いた後の状態を出力せよ。
  
  
- 発想<br>
  n を 2 進数に変換したときに 1 になっている桁を出力する。<br>
  8 -> 1000 なので、4 桁目の 4 を出力する。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  string binary(int v){
    long long ans = 0;
    for (int i = 0; v > 0 ; i++)
    {
      ans = ans + (v % 2) * pow(10, i);
      v = v / 2;
    }
    return to_string(ans);
  }

  int main() {

    int n;
    cin >> n;

    string answer = binary(n);

    for (int i = 0; i < answer.size(); i++) {
      if (answer[i] == '1') {
        cout << answer.size() - i << " ";
      }
    }

    cout << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      sc.close();

      String A = binary(n);

      char[] answer = A.toCharArray();

      for (int i = 0; i < answer.length; i++) {
        if (answer[i] == '1') {
          System.out.print((answer.length - i) + " ");
        }
      }

      System.out.println("");

    }

    static String binary(int v){
      long ans = 0;
      for (int i = 0; v > 0 ; i++)
      {
        ans = ans + (v % 2) * (long) Math.pow(10, i);
        v = v / 2;
      }
      return String.valueOf(ans);
    }


  }
  ```
    