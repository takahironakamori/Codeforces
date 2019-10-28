### Codeforces Round #552 (Div. 3)

# A. Restoring Three Numbers

  [問題はこちら](https://codeforces.com/problemset/problem/1154/A)
  
- 概要<br>
  数値が 4 個が与えられる。<br>
  与えられる 4 個は、3 個の正の整数 a、b、cの組み合わせ、 a + b、a + c、b + c、a + b + c である。<br>
  与えられる 4 個の数値が、a + b、a + c、b + c、a + b + c かはわからない。<br>
  そこで、a、b、c を出力せよ。<br>
  ただし、a、b、c に入る数値の組み合わせは複数のある場合は、どれか 1 組でいい。<br>

  
- 発想<br>
  与えられる 4 個の整数のうち最も大きい数値が、a + b + c になるので、<br>
  4 個の並び替えて大きい数値を得る。<br>
  大きい数値から残った 3 つの数値を引くと、a か b か c の数値を得ることができる。<br>
  どの数値が a になるか等は気にしない。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> n(4);
    for (int i = 0; i < 4; i++) {
      cin >> n[i];
    }

    sort(n.begin(), n.end());

    cout << n[3] - n[2] << " ";
    cout << n[3] - n[1] << " ";
    cout << n[3] - n[0] << endl;

  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);

      int[] n = new int[4];
      for (int i = 0; i < 4; i++) {
        n[i] = sc.nextInt();
      }
      sc.close();

      Arrays.sort(n);

      System.out.print(n[3] - n[2] + " ");
      System.out.print(n[3] - n[1] + " ");
      System.out.print(n[3] - n[0] + " ");
      System.out.println("");

    }

  }
  ```
    