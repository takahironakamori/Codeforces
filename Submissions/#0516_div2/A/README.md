### Codeforces Round #516 (Div. 2, by Moscow Team Olympiad)

# A. Make a triangle!

  [問題はこちら](https://codeforces.com/problemset/problem/1064/A)
  
- 概要<br>
  長さが a, b, c の 3 本の棒があり、いくらでも伸ばすことができる。<br>
  これらの棒を使って三角形を作る場合に、最小でどれだけ長さを伸ばしたらいいか。

  
- 発想<br>
  三角形を作るには、a, b, c のうち、最も長い棒より残り 2 本の棒の合計が大きい必要がある。<br>
  最も長い棒と残り 2 本の棒の合計を比較し、残り 2 本の棒の合計が大きい場合は 0 。<br>
  最も長い棒と残り 2 本の棒の合計を比較し、最も長い棒が大きい場合は最も長い棒から残り 2 本の棒の合計を引いて 1 加えたものが追加すべき長さとなる 。<br>
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> abc(3);
    cin >> abc[0] >> abc[1] >> abc[2];

    sort(abc.begin(), abc.end());

    if (abc[2] < abc[0]+abc[1]) {
      cout << 0 << endl;
    } else {
      cout << abc[2] - abc[0] - abc[1] + 1 << endl;
    }
  }
  ```
  
- コード（Java）

  ```java
  import java.util.*;

  public class Main {

    public static void main (String[] args) {

      Scanner sc = new Scanner(System.in);
      int[] abc = new int[3];
      abc[0] = sc.nextInt();
      abc[1] = sc.nextInt();
      abc[2] = sc.nextInt();
      sc.close();

      Arrays.sort(abc);

      if (abc[2] < abc[0]+abc[1]) {
        System.out.println(0);
      } else {
        System.out.println(abc[2] - abc[0] - abc[1] + 1);
      }

    }

  }
  ```
    