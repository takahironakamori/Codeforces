### Codeforces Round #568 (Div.2)

# A. Ropewalkers

  [問題はこちら](https://codeforces.com/problemset/problem/1185/A)
  
- 概要<br>
  a, b, c の 3 つの数値があって、それぞれの間隔を最低 d にしたい。<br>
  1 移動させるのを 1 手と数えると最低何手必要か。<br>
  a, b, c のうち同時に複数移動させても 1 手と数える。
  
  
- 発想<br>
  a, b, c を昇順に並び替える。<br>
  最も小さい値(Aとする)を基準にすると、<br>
  2 番目に小さい値は A + d に、<br>
  3 番目に小さい値は A + 2d に、<br>
  少なくともいなければならない。<br>
  それぞれの現在地との差で大きい方が回答となる。
  
  
- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;

  int main() {

    vector<int> abc(3);
    cin >> abc[0] >> abc[1] >> abc[2];

    int d;
    cin >> d;

    sort(abc.begin(), abc.end());

    int ab = abc[0] + d - abc[1];
    int bc = abc[0] + d * 2 - abc[2];

    if (max(ab, bc) < 0) {
      cout << 0 << endl;
    } else {
      cout << max(ab, bc) << endl;
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
      int d = sc.nextInt();
      sc.close();

      Arrays.sort(abc);

      int ab = abc[0] + d - abc[1];
      int bc = abc[0] + d * 2 - abc[2];

      if (Math.max(ab, bc) < 0) {
        System.out.println(0);
      } else {
        System.out.println(Math.max(ab, bc));
      }

    }


  }
  ```
    